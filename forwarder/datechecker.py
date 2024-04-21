from dateutil import parser

# log_entry = "Mar 19 13:55:12 myhostname systemd[1]: Started Network Service."
# log_entry = "[13/Sep/2023:20:48:50 +0530] GET /phpmyadmin/ HTTP/1.1 200 16960 "-" Mozilla/5.0 (Windows NT 10.0; Win64; x64)"
# log_entry = "[Wed Sep 13 20:48:10.889586 2023] [ssl:warn] [pid 28492:tid 368] AH01909: www.example.com:443:0 server certificate does NOT include an ID which matches the server name [Wed Sep 13 20:48:10.924494 2023] [ssl:warn] [pid 28492:tid 368] AH01909: www.example.com:443:0 server certificate does NOT include an ID which matches the server name [Wed Sep 13 20:48:10.945967 2023] [mpm_winnt:notice] [pid 28492:tid 368] AH00455: Apache/2.4.56 (Win64) OpenSSL/1.1.1t PHP/8.0.28 configured -- resuming normal operations"
# log_entry = "[Wed Sep 13 20:48:10.889586 2023] [ssl:warn]"
# log_entry = "[13/Sep/2023:20:48:50 +0530]"
log_entry = "[Wed Sep 13 20:48:10.889586 2023]"

#[Wed Sep 13 20:48:10.889586 2023]
# Attempt to parse the date from the log entry
try:
    timestamp = parser.parse(log_entry, fuzzy=True)
    print("Parsed Timestamp:", timestamp)
except ValueError:
    print("Date not found or could not be parsed.")




# import re

# log_entry = "[Wed Sep 13 20:48:10.889586 2023] [ssl:warn] [pid 28492:tid 368] AH01909: www.example.com:443:0 server certificate does NOT include an ID which matches the server name"

# # Define a regular expression pattern to match the date format
# date_pattern = r"\[(.*?)\]"

# # Search for the date in the log entry
# match = re.search(date_pattern, log_entry)

# if match:
#     date = match.group(1)
#     print("Date:", date)
# else:
#     print("No date found in the log entry.")






