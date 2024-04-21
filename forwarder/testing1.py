import tkinter as tk
from tkinter import Entry, Label, Button
from tkinter import ttk
import jwt
import time
import os
import requests
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import socket
from requests.cookies import RequestsCookieJar

# Check if the user is already logged in
logged_in = False

STATIC_TOKEN = os.environ.get('STATIC_TOKEN')

class DataForwarder:
    def __init__(self, server_url):
        self.server_url = server_url

    def forward_data(self, data):
        headers = {
            'Content-Type': 'application/json',
            'Authorization': f'Bearer {STATIC_TOKEN}'  
        }
        response = requests.post(self.server_url, json=data, headers=headers)
        if response.status_code == 201:
            print("Data forwarded successfully")
        else:
            print(f"Error forwarding data. Status code: {response.status_code}")

class FileHandler(FileSystemEventHandler):
    def __init__(self, data_forwarder):
        self.data_forwarder = data_forwarder

    def on_modified(self, event):
        if not event.is_directory and event.event_type == 'modified':
            with open(event.src_path, 'r') as file:
                new_data = file.read()
                new_data1 = new_data
                print(new_data1)
                combined_data = new_data  # Append new data to existing data

                host = socket.gethostname()  # Get the host name
                print("host: " + host)

                headers =  { 'Content-Type': 'application/json' }

                response = requests.get('http://127.0.0.1:8000/user', headers=headers)

                # response = requests.get('http://127.0.0.1:8000/user')
                
                user_data = response.json()
                email = user_data.get('email')
                print(user_data)

                data = {
                    'log_data': combined_data,
                    'file_name': os.path.basename(event.src_path),  # Include the filename in the data
                    "host": host,
                    "isForwarder": True,
                }
                self.data_forwarder.forward_data(data)

def submit_data():
    global logged_in

    # name = name_entry.get()
    email = email_entry.get()
    password = password_entry.get()
    # role = role_combobox.get()

    # data = {
    #     'name': name,
    #     'email': email,
    #     'password': password,
    #     'role': role,
    # }

    dataLogin = {
        'email': email,
        'password': password,
    }

    if not logged_in:
        # Send the data to the server
        # url = "http://127.0.0.1:8000/register"
        headers = {'Content-Type': 'application/json'}
        urlLogin = "http://127.0.0.1:8000/login"
        
        # response = requests.post(url, json=data, headers=headers)
        response1 = requests.post(urlLogin, json=dataLogin, headers=headers)


        # if response.status_code == 200:
        #     print("Data submitted successfully")
        #     logged_in = True  # Update login state
        # else:
        #     print(f"Error submitting data. Status code: {response.status_code}")

        if response1.status_code == 200:
            print("Login Data submitted successfully")

            # Check and decode the JWT token
            token = response1.cookies.get('jwt')

            headers = {
            'Content-Type': 'application/json',
            'Authorization': f'Bearer {token}'
        }
            response = requests.get('http://127.0.0.1:8000/user', headers=headers)

            print(response.json())

            
            
        # response.set_cookie(key='jwt', value=token, httponly=True)
                 
            print(token)
            if token:
                try:
                    decoded_token = jwt.decode(token, 'secret', algorithms=['HS256'])
                    print("Decoded Token:", decoded_token)
                    # You can access the user's information from the decoded_token dictionary.
                except jwt.ExpiredSignatureError:
                    print("JWT token has expired.")
                except jwt.DecodeError:
                    print("JWT token decode error.")
        else:
            print(f"Error submitting data. Status code: {response1.status_code}")

if __name__ == "__main__":
    server_url = "http://127.0.0.1:8000/forwarder-data/"  # Replace with the actual URL of your forwarder data API endpoint.
    data_forwarder = DataForwarder(server_url)

    path = "C:\\Users\\ashhe\\Desktop\\log-monitor"

    event_handler = FileHandler(data_forwarder)
    observer = Observer()
    observer.schedule(event_handler, path, recursive=True)
    observer.start()

    # Create a window
    window = tk.Tk()
    window.title("User Input and Data Forwarding")

    # Create a style for ttk widgets
    style = ttk.Style()
    style.configure("TButton", padding=5, font=("Helvetica", 12))
    style.configure("TLabel", padding=5, font=("Helvetica", 12))

    # # Create input fields and labels
    # name_label = ttk.Label(window, text="Name:")
    # name_label.grid(row=0, column=0, padx=10, pady=5, sticky="e")
    # name_entry = Entry(window)
    # name_entry.grid(row=0, column=1, padx=10, pady=5)

    email_label = ttk.Label(window, text="Email:")
    email_label.grid(row=1, column=0, padx=10, pady=5, sticky="e")
    email_entry = Entry(window)
    email_entry.grid(row=1, column=1, padx=10, pady=5)

    password_label = ttk.Label(window, text="Password:")
    password_label.grid(row=2, column=0, padx=10, pady=5, sticky="e")
    password_entry = Entry(window, show="*")
    password_entry.grid(row=2, column=1, padx=10, pady=5)

    # role_label = ttk.Label(window, text="Role:")
    # role_label.grid(row=3, column=0, padx=10, pady=5, sticky="e")

    # # Create a dropdown menu for the "Role" input
    # roles = ["admin", "role1", "role2"]
    # role_combobox = ttk.Combobox(window, values=roles)
    # role_combobox.grid(row=3, column=1, padx=10, pady=5)
    # role_combobox.set(roles[0])  # Set the default selection

    # Create a submit button for user input
    submit_button = ttk.Button(window, text="Submit User Data", command=submit_data)
    submit_button.grid(row=4, column=0, columnspan=2, padx=10, pady=10)

    # Start the main loop
    window.mainloop()

    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        observer.stop()
    observer.join()
