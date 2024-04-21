/* Generated code for Python module 'watchdog.observers.winapi'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_watchdog$observers$winapi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$observers$winapi;
PyDictObject *moduledict_watchdog$observers$winapi;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("watchdog.observers.winapi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_watchdog$observers$winapi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_34d9f54cbfb86afbef840e13f23962c4;
static PyCodeObject *codeobj_19b3fc2e11549a794805896ac97cf63f;
static PyCodeObject *codeobj_aa9cb4446966d916ebb3e805f7a9a2fc;
static PyCodeObject *codeobj_8b65b910de83ea001fcdd0b4c79dfe86;
static PyCodeObject *codeobj_8ddffac950a3e0a3dc1dcf80bf8bcd37;
static PyCodeObject *codeobj_b55eace47d4272b3174e3b4e7cf86aa0;
static PyCodeObject *codeobj_f7507e639d4677e807b9f504edac052c;
static PyCodeObject *codeobj_669725e2b869eee62ce7051be2bdeec2;
static PyCodeObject *codeobj_03b477654638da0fa63b60ec34b781cd;
static PyCodeObject *codeobj_cec0ae01529c1ded00a6434fc945b273;
static PyCodeObject *codeobj_8deb663dd8d1818e232d8b68f5fd5f04;
static PyCodeObject *codeobj_dd8145fe5710eaca306efc3cafeb3547;
static PyCodeObject *codeobj_2739b5cf25b942ee0ccd392a7dac2066;
static PyCodeObject *codeobj_f1d17e727674fe5748c329ba6d5421eb;
static PyCodeObject *codeobj_e7c40ee54b4bbc2a7d36775a3c85789e;
static PyCodeObject *codeobj_1e5a11db015756a50afe511fff146a89;
static PyCodeObject *codeobj_736f8c8c3ec3713cc7547ccb5f96d521;
static PyCodeObject *codeobj_e494bf4704195f404e06b1d0d49527a3;
static PyCodeObject *codeobj_8925f27bd0070736cabed88fe01ef106;
static PyCodeObject *codeobj_7486540626f9a9d9f3aea490305bbd54;
static PyCodeObject *codeobj_f6821a14a6da9cfc044e228dc907c2a7;
static PyCodeObject *codeobj_c1e15a92f7133635a4686be5559eb2c1;
static PyCodeObject *codeobj_f7c2c786285476492ba70a413bdb9865;
static PyCodeObject *codeobj_ab2436eb20e22515f2f4253222604797;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[184]); CHECK_OBJECT(module_filename_obj);
    codeobj_34d9f54cbfb86afbef840e13f23962c4 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[161], mod_consts[161], mod_consts[185], NULL, 2, 0, 0);
    codeobj_19b3fc2e11549a794805896ac97cf63f = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[161], mod_consts[161], mod_consts[185], NULL, 2, 0, 0);
    codeobj_aa9cb4446966d916ebb3e805f7a9a2fc = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_8b65b910de83ea001fcdd0b4c79dfe86 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[187], NULL, 0, 0, 0);
    codeobj_8ddffac950a3e0a3dc1dcf80bf8bcd37 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_FUTURE_ANNOTATIONS, mod_consts[124], mod_consts[124], mod_consts[187], NULL, 0, 0, 0);
    codeobj_b55eace47d4272b3174e3b4e7cf86aa0 = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_FUTURE_ANNOTATIONS, mod_consts[70], mod_consts[70], mod_consts[187], NULL, 0, 0, 0);
    codeobj_f7507e639d4677e807b9f504edac052c = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], mod_consts[188], NULL, 3, 0, 0);
    codeobj_669725e2b869eee62ce7051be2bdeec2 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[180], mod_consts[180], mod_consts[189], NULL, 1, 0, 0);
    codeobj_03b477654638da0fa63b60ec34b781cd = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[140], mod_consts[140], mod_consts[190], NULL, 3, 0, 0);
    codeobj_cec0ae01529c1ded00a6434fc945b273 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[190], NULL, 3, 0, 0);
    codeobj_8deb663dd8d1818e232d8b68f5fd5f04 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[141], mod_consts[141], mod_consts[190], NULL, 3, 0, 0);
    codeobj_dd8145fe5710eaca306efc3cafeb3547 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[50], mod_consts[50], mod_consts[191], NULL, 0, 0, 0);
    codeobj_2739b5cf25b942ee0ccd392a7dac2066 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[49], mod_consts[49], mod_consts[192], NULL, 2, 0, 0);
    codeobj_f1d17e727674fe5748c329ba6d5421eb = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[69], mod_consts[69], mod_consts[193], NULL, 2, 0, 0);
    codeobj_e7c40ee54b4bbc2a7d36775a3c85789e = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[165], mod_consts[165], mod_consts[194], NULL, 1, 0, 0);
    codeobj_1e5a11db015756a50afe511fff146a89 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[164], mod_consts[164], mod_consts[195], NULL, 1, 0, 0);
    codeobj_736f8c8c3ec3713cc7547ccb5f96d521 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[168], mod_consts[168], mod_consts[189], NULL, 1, 0, 0);
    codeobj_e494bf4704195f404e06b1d0d49527a3 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], mod_consts[189], NULL, 1, 0, 0);
    codeobj_8925f27bd0070736cabed88fe01ef106 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[170], mod_consts[170], mod_consts[189], NULL, 1, 0, 0);
    codeobj_7486540626f9a9d9f3aea490305bbd54 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[178], mod_consts[178], mod_consts[189], NULL, 1, 0, 0);
    codeobj_f6821a14a6da9cfc044e228dc907c2a7 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], mod_consts[189], NULL, 1, 0, 0);
    codeobj_c1e15a92f7133635a4686be5559eb2c1 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[174], mod_consts[174], mod_consts[189], NULL, 1, 0, 0);
    codeobj_f7c2c786285476492ba70a413bdb9865 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[67], mod_consts[196], NULL, 3, 0, 0);
    codeobj_ab2436eb20e22515f2f4253222604797 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[183], mod_consts[183], mod_consts[197], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__12___init__();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_added();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_removed();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_modified();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_old();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_renamed_new();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_is_removed_self();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__19___repr__();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__20_read_events();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event();


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle();


// The module function definitions.
static PyObject *impl_watchdog$observers$winapi$$$function__1__errcheck_bool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    struct Nuitka_FrameObject *frame_03b477654638da0fa63b60ec34b781cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03b477654638da0fa63b60ec34b781cd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03b477654638da0fa63b60ec34b781cd)) {
        Py_XDECREF(cache_frame_03b477654638da0fa63b60ec34b781cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03b477654638da0fa63b60ec34b781cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03b477654638da0fa63b60ec34b781cd = MAKE_FUNCTION_FRAME(tstate, codeobj_03b477654638da0fa63b60ec34b781cd, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03b477654638da0fa63b60ec34b781cd->m_type_description == NULL);
    frame_03b477654638da0fa63b60ec34b781cd = cache_frame_03b477654638da0fa63b60ec34b781cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_03b477654638da0fa63b60ec34b781cd);
    assert(Py_REFCNT(frame_03b477654638da0fa63b60ec34b781cd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_03b477654638da0fa63b60ec34b781cd->m_frame.f_lineno = 109;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 109;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03b477654638da0fa63b60ec34b781cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03b477654638da0fa63b60ec34b781cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03b477654638da0fa63b60ec34b781cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03b477654638da0fa63b60ec34b781cd,
        type_description_1,
        par_value,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_03b477654638da0fa63b60ec34b781cd == cache_frame_03b477654638da0fa63b60ec34b781cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03b477654638da0fa63b60ec34b781cd);
        cache_frame_03b477654638da0fa63b60ec34b781cd = NULL;
    }

    assertFrameObject(frame_03b477654638da0fa63b60ec34b781cd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_args);
    tmp_return_value = par_args;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__2__errcheck_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    struct Nuitka_FrameObject *frame_8deb663dd8d1818e232d8b68f5fd5f04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8deb663dd8d1818e232d8b68f5fd5f04 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8deb663dd8d1818e232d8b68f5fd5f04)) {
        Py_XDECREF(cache_frame_8deb663dd8d1818e232d8b68f5fd5f04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8deb663dd8d1818e232d8b68f5fd5f04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8deb663dd8d1818e232d8b68f5fd5f04 = MAKE_FUNCTION_FRAME(tstate, codeobj_8deb663dd8d1818e232d8b68f5fd5f04, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8deb663dd8d1818e232d8b68f5fd5f04->m_type_description == NULL);
    frame_8deb663dd8d1818e232d8b68f5fd5f04 = cache_frame_8deb663dd8d1818e232d8b68f5fd5f04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8deb663dd8d1818e232d8b68f5fd5f04);
    assert(Py_REFCNT(frame_8deb663dd8d1818e232d8b68f5fd5f04) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_8deb663dd8d1818e232d8b68f5fd5f04->m_frame.f_lineno = 115;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8deb663dd8d1818e232d8b68f5fd5f04->m_frame.f_lineno = 117;
        tmp_raise_type_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[1]);
        if (tmp_raise_type_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 117;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8deb663dd8d1818e232d8b68f5fd5f04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8deb663dd8d1818e232d8b68f5fd5f04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8deb663dd8d1818e232d8b68f5fd5f04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8deb663dd8d1818e232d8b68f5fd5f04,
        type_description_1,
        par_value,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8deb663dd8d1818e232d8b68f5fd5f04 == cache_frame_8deb663dd8d1818e232d8b68f5fd5f04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8deb663dd8d1818e232d8b68f5fd5f04);
        cache_frame_8deb663dd8d1818e232d8b68f5fd5f04 = NULL;
    }

    assertFrameObject(frame_8deb663dd8d1818e232d8b68f5fd5f04);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_args);
    tmp_return_value = par_args;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__3__errcheck_dword(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    struct Nuitka_FrameObject *frame_cec0ae01529c1ded00a6434fc945b273;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cec0ae01529c1ded00a6434fc945b273 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cec0ae01529c1ded00a6434fc945b273)) {
        Py_XDECREF(cache_frame_cec0ae01529c1ded00a6434fc945b273);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cec0ae01529c1ded00a6434fc945b273 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cec0ae01529c1ded00a6434fc945b273 = MAKE_FUNCTION_FRAME(tstate, codeobj_cec0ae01529c1ded00a6434fc945b273, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cec0ae01529c1ded00a6434fc945b273->m_type_description == NULL);
    frame_cec0ae01529c1ded00a6434fc945b273 = cache_frame_cec0ae01529c1ded00a6434fc945b273;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cec0ae01529c1ded00a6434fc945b273);
    assert(Py_REFCNT(frame_cec0ae01529c1ded00a6434fc945b273) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_cec0ae01529c1ded00a6434fc945b273->m_frame.f_lineno = 123;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cec0ae01529c1ded00a6434fc945b273, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cec0ae01529c1ded00a6434fc945b273->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cec0ae01529c1ded00a6434fc945b273, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cec0ae01529c1ded00a6434fc945b273,
        type_description_1,
        par_value,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cec0ae01529c1ded00a6434fc945b273 == cache_frame_cec0ae01529c1ded00a6434fc945b273) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cec0ae01529c1ded00a6434fc945b273);
        cache_frame_cec0ae01529c1ded00a6434fc945b273 = NULL;
    }

    assertFrameObject(frame_cec0ae01529c1ded00a6434fc945b273);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_args);
    tmp_return_value = par_args;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_34d9f54cbfb86afbef840e13f23962c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34d9f54cbfb86afbef840e13f23962c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34d9f54cbfb86afbef840e13f23962c4)) {
        Py_XDECREF(cache_frame_34d9f54cbfb86afbef840e13f23962c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34d9f54cbfb86afbef840e13f23962c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34d9f54cbfb86afbef840e13f23962c4 = MAKE_FUNCTION_FRAME(tstate, codeobj_34d9f54cbfb86afbef840e13f23962c4, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34d9f54cbfb86afbef840e13f23962c4->m_type_description == NULL);
    frame_34d9f54cbfb86afbef840e13f23962c4 = cache_frame_34d9f54cbfb86afbef840e13f23962c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_34d9f54cbfb86afbef840e13f23962c4);
    assert(Py_REFCNT(frame_34d9f54cbfb86afbef840e13f23962c4) == 2);

    // Framed code:
    {
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitor_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitor_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34d9f54cbfb86afbef840e13f23962c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34d9f54cbfb86afbef840e13f23962c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34d9f54cbfb86afbef840e13f23962c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34d9f54cbfb86afbef840e13f23962c4,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_34d9f54cbfb86afbef840e13f23962c4 == cache_frame_34d9f54cbfb86afbef840e13f23962c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34d9f54cbfb86afbef840e13f23962c4);
        cache_frame_34d9f54cbfb86afbef840e13f23962c4 = NULL;
    }

    assertFrameObject(frame_34d9f54cbfb86afbef840e13f23962c4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_19b3fc2e11549a794805896ac97cf63f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19b3fc2e11549a794805896ac97cf63f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19b3fc2e11549a794805896ac97cf63f)) {
        Py_XDECREF(cache_frame_19b3fc2e11549a794805896ac97cf63f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19b3fc2e11549a794805896ac97cf63f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19b3fc2e11549a794805896ac97cf63f = MAKE_FUNCTION_FRAME(tstate, codeobj_19b3fc2e11549a794805896ac97cf63f, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19b3fc2e11549a794805896ac97cf63f->m_type_description == NULL);
    frame_19b3fc2e11549a794805896ac97cf63f = cache_frame_19b3fc2e11549a794805896ac97cf63f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_19b3fc2e11549a794805896ac97cf63f);
    assert(Py_REFCNT(frame_19b3fc2e11549a794805896ac97cf63f) == 2);

    // Framed code:
    {
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitor_expr_left_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_bitor_expr_right_1 = par_y;
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19b3fc2e11549a794805896ac97cf63f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19b3fc2e11549a794805896ac97cf63f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19b3fc2e11549a794805896ac97cf63f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19b3fc2e11549a794805896ac97cf63f,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_19b3fc2e11549a794805896ac97cf63f == cache_frame_19b3fc2e11549a794805896ac97cf63f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19b3fc2e11549a794805896ac97cf63f);
        cache_frame_19b3fc2e11549a794805896ac97cf63f = NULL;
    }

    assertFrameObject(frame_19b3fc2e11549a794805896ac97cf63f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__6__parse_event_buffer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_readBuffer = python_pars[0];
    PyObject *par_nBytes = python_pars[1];
    PyObject *var_results = NULL;
    PyObject *var_fni = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_numToSkip = NULL;
    struct Nuitka_FrameObject *frame_f1d17e727674fe5748c329ba6d5421eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1d17e727674fe5748c329ba6d5421eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_results == NULL);
        var_results = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f1d17e727674fe5748c329ba6d5421eb)) {
        Py_XDECREF(cache_frame_f1d17e727674fe5748c329ba6d5421eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1d17e727674fe5748c329ba6d5421eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1d17e727674fe5748c329ba6d5421eb = MAKE_FUNCTION_FRAME(tstate, codeobj_f1d17e727674fe5748c329ba6d5421eb, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1d17e727674fe5748c329ba6d5421eb->m_type_description == NULL);
    frame_f1d17e727674fe5748c329ba6d5421eb = cache_frame_f1d17e727674fe5748c329ba6d5421eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f1d17e727674fe5748c329ba6d5421eb);
    assert(Py_REFCNT(frame_f1d17e727674fe5748c329ba6d5421eb) == 2);

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_nBytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = par_nBytes;
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_readBuffer == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_readBuffer;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1d17e727674fe5748c329ba6d5421eb->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fni;
            var_fni = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fni);
        tmp_args_element_value_3 = var_fni;
        frame_f1d17e727674fe5748c329ba6d5421eb->m_frame.f_lineno = 290;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_3);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ptr;
            var_ptr = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[13]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_4 = var_ptr;
        CHECK_OBJECT(var_fni);
        tmp_expression_value_6 = var_fni;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[14]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1d17e727674fe5748c329ba6d5421eb->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_filename;
            var_filename = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_results;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[16]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fni);
        tmp_expression_value_8 = var_fni;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_filename);
            tmp_expression_value_9 = var_filename;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[18]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            frame_f1d17e727674fe5748c329ba6d5421eb->m_frame.f_lineno = 293;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[19]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_6, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_f1d17e727674fe5748c329ba6d5421eb->m_frame.f_lineno = 293;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_fni);
        tmp_expression_value_10 = var_fni;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[20]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_numToSkip;
            var_numToSkip = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_numToSkip);
        tmp_cmp_expr_left_2 = var_numToSkip;
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (par_readBuffer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_readBuffer;
        CHECK_OBJECT(var_numToSkip);
        tmp_start_value_1 = var_numToSkip;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_readBuffer;
            par_readBuffer = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        if (par_nBytes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isub_expr_left_1 = par_nBytes;
        CHECK_OBJECT(var_numToSkip);
        tmp_isub_expr_right_1 = var_numToSkip;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_isub_expr_left_1;
        par_nBytes = tmp_assign_source_7;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 288;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_results == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 299;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_results;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1d17e727674fe5748c329ba6d5421eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1d17e727674fe5748c329ba6d5421eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1d17e727674fe5748c329ba6d5421eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1d17e727674fe5748c329ba6d5421eb,
        type_description_1,
        par_readBuffer,
        par_nBytes,
        var_results,
        var_fni,
        var_ptr,
        var_filename,
        var_numToSkip
    );


    // Release cached frame if used for exception.
    if (frame_f1d17e727674fe5748c329ba6d5421eb == cache_frame_f1d17e727674fe5748c329ba6d5421eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1d17e727674fe5748c329ba6d5421eb);
        cache_frame_f1d17e727674fe5748c329ba6d5421eb = NULL;
    }

    assertFrameObject(frame_f1d17e727674fe5748c329ba6d5421eb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_readBuffer);
    par_readBuffer = NULL;
    Py_XDECREF(par_nBytes);
    par_nBytes = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_fni);
    var_fni = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_numToSkip);
    var_numToSkip = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_readBuffer);
    par_readBuffer = NULL;
    Py_XDECREF(par_nBytes);
    par_nBytes = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_fni);
    var_fni = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_numToSkip);
    var_numToSkip = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_2739b5cf25b942ee0ccd392a7dac2066;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2739b5cf25b942ee0ccd392a7dac2066 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2739b5cf25b942ee0ccd392a7dac2066)) {
        Py_XDECREF(cache_frame_2739b5cf25b942ee0ccd392a7dac2066);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2739b5cf25b942ee0ccd392a7dac2066 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2739b5cf25b942ee0ccd392a7dac2066 = MAKE_FUNCTION_FRAME(tstate, codeobj_2739b5cf25b942ee0ccd392a7dac2066, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2739b5cf25b942ee0ccd392a7dac2066->m_type_description == NULL);
    frame_2739b5cf25b942ee0ccd392a7dac2066 = cache_frame_2739b5cf25b942ee0ccd392a7dac2066;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2739b5cf25b942ee0ccd392a7dac2066);
    assert(Py_REFCNT(frame_2739b5cf25b942ee0ccd392a7dac2066) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 306;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2739b5cf25b942ee0ccd392a7dac2066->m_frame.f_lineno = 306;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_2 = par_handle;
        CHECK_OBJECT(var_buff);
        tmp_args_element_value_3 = var_buff;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2739b5cf25b942ee0ccd392a7dac2066->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_cmp_expr_right_1 = par_path;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2739b5cf25b942ee0ccd392a7dac2066, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2739b5cf25b942ee0ccd392a7dac2066->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2739b5cf25b942ee0ccd392a7dac2066, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2739b5cf25b942ee0ccd392a7dac2066,
        type_description_1,
        par_handle,
        par_path,
        var_buff
    );


    // Release cached frame if used for exception.
    if (frame_2739b5cf25b942ee0ccd392a7dac2066 == cache_frame_2739b5cf25b942ee0ccd392a7dac2066) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2739b5cf25b942ee0ccd392a7dac2066);
        cache_frame_2739b5cf25b942ee0ccd392a7dac2066 = NULL;
    }

    assertFrameObject(frame_2739b5cf25b942ee0ccd392a7dac2066);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buff);
    var_buff = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_path = NULL;
    PyObject *var_event = NULL;
    PyObject *var_event_size = NULL;
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_dd8145fe5710eaca306efc3cafeb3547;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dd8145fe5710eaca306efc3cafeb3547 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd8145fe5710eaca306efc3cafeb3547)) {
        Py_XDECREF(cache_frame_dd8145fe5710eaca306efc3cafeb3547);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd8145fe5710eaca306efc3cafeb3547 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd8145fe5710eaca306efc3cafeb3547 = MAKE_FUNCTION_FRAME(tstate, codeobj_dd8145fe5710eaca306efc3cafeb3547, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd8145fe5710eaca306efc3cafeb3547->m_type_description == NULL);
    frame_dd8145fe5710eaca306efc3cafeb3547 = cache_frame_dd8145fe5710eaca306efc3cafeb3547;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd8145fe5710eaca306efc3cafeb3547);
    assert(Py_REFCNT(frame_dd8145fe5710eaca306efc3cafeb3547) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 313;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[5];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_len_arg_1 = var_path;
        tmp_args_element_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_expression_value_2 = var_path;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 315;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[29]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_event == NULL);
        var_event = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_event);
        tmp_args_element_value_5 = var_event;
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 317;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[30], tmp_args_element_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_event_size == NULL);
        var_event_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 318;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buff);
        tmp_args_element_value_7 = var_buff;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_event);
        tmp_args_element_value_9 = var_event;
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 319;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[9], tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_event_size);
        tmp_args_element_value_10 = var_event_size;
        frame_dd8145fe5710eaca306efc3cafeb3547->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_10};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd8145fe5710eaca306efc3cafeb3547, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd8145fe5710eaca306efc3cafeb3547->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd8145fe5710eaca306efc3cafeb3547, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd8145fe5710eaca306efc3cafeb3547,
        type_description_1,
        var_path,
        var_event,
        var_event_size,
        var_buff
    );


    // Release cached frame if used for exception.
    if (frame_dd8145fe5710eaca306efc3cafeb3547 == cache_frame_dd8145fe5710eaca306efc3cafeb3547) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd8145fe5710eaca306efc3cafeb3547);
        cache_frame_dd8145fe5710eaca306efc3cafeb3547 = NULL;
    }

    assertFrameObject(frame_dd8145fe5710eaca306efc3cafeb3547);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_buff);
        tmp_tuple_element_1 = var_buff;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_event_size);
        tmp_tuple_element_1 = var_event_size;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_event_size);
    Py_DECREF(var_event_size);
    var_event_size = NULL;
    CHECK_OBJECT(var_buff);
    Py_DECREF(var_buff);
    var_buff = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_event_size);
    var_event_size = NULL;
    Py_XDECREF(var_buff);
    var_buff = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__9_get_directory_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_1e5a11db015756a50afe511fff146a89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e5a11db015756a50afe511fff146a89 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e5a11db015756a50afe511fff146a89)) {
        Py_XDECREF(cache_frame_1e5a11db015756a50afe511fff146a89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e5a11db015756a50afe511fff146a89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e5a11db015756a50afe511fff146a89 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e5a11db015756a50afe511fff146a89, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e5a11db015756a50afe511fff146a89->m_type_description == NULL);
    frame_1e5a11db015756a50afe511fff146a89 = cache_frame_1e5a11db015756a50afe511fff146a89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e5a11db015756a50afe511fff146a89);
    assert(Py_REFCNT(frame_1e5a11db015756a50afe511fff146a89) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = Py_None;
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = Py_None;
        frame_1e5a11db015756a50afe511fff146a89->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e5a11db015756a50afe511fff146a89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e5a11db015756a50afe511fff146a89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e5a11db015756a50afe511fff146a89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e5a11db015756a50afe511fff146a89,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_1e5a11db015756a50afe511fff146a89 == cache_frame_1e5a11db015756a50afe511fff146a89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e5a11db015756a50afe511fff146a89);
        cache_frame_1e5a11db015756a50afe511fff146a89 = NULL;
    }

    assertFrameObject(frame_1e5a11db015756a50afe511fff146a89);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__10_close_directory_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    struct Nuitka_FrameObject *frame_e7c40ee54b4bbc2a7d36775a3c85789e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e)) {
        Py_XDECREF(cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e = MAKE_FUNCTION_FRAME(tstate, codeobj_e7c40ee54b4bbc2a7d36775a3c85789e, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_type_description == NULL);
    frame_e7c40ee54b4bbc2a7d36775a3c85789e = cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e7c40ee54b4bbc2a7d36775a3c85789e);
    assert(Py_REFCNT(frame_e7c40ee54b4bbc2a7d36775a3c85789e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_1 = par_handle;
        tmp_args_element_value_2 = Py_None;
        frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_3 = par_handle;
        frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame.f_lineno = 339;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_4 = par_handle;
        frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame.f_lineno = 342;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 341;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame) frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 337;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame) frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7c40ee54b4bbc2a7d36775a3c85789e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7c40ee54b4bbc2a7d36775a3c85789e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7c40ee54b4bbc2a7d36775a3c85789e,
        type_description_1,
        par_handle
    );


    // Release cached frame if used for exception.
    if (frame_e7c40ee54b4bbc2a7d36775a3c85789e == cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e);
        cache_frame_e7c40ee54b4bbc2a7d36775a3c85789e = NULL;
    }

    assertFrameObject(frame_e7c40ee54b4bbc2a7d36775a3c85789e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__11_read_directory_changes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    PyObject *var_event_buffer = NULL;
    PyObject *var_nbytes = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_f7c2c786285476492ba70a413bdb9865;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f7c2c786285476492ba70a413bdb9865 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f7c2c786285476492ba70a413bdb9865)) {
        Py_XDECREF(cache_frame_f7c2c786285476492ba70a413bdb9865);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7c2c786285476492ba70a413bdb9865 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7c2c786285476492ba70a413bdb9865 = MAKE_FUNCTION_FRAME(tstate, codeobj_f7c2c786285476492ba70a413bdb9865, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7c2c786285476492ba70a413bdb9865->m_type_description == NULL);
    frame_f7c2c786285476492ba70a413bdb9865 = cache_frame_f7c2c786285476492ba70a413bdb9865;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7c2c786285476492ba70a413bdb9865);
    assert(Py_REFCNT(frame_f7c2c786285476492ba70a413bdb9865) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 352;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_event_buffer == NULL);
        var_event_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_called_instance_1 == NULL));
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 353;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[42]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nbytes == NULL);
        var_nbytes = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_2 = par_handle;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_event_buffer);
        tmp_args_element_value_4 = var_event_buffer;
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 357;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[44], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_event_buffer);
        tmp_len_arg_1 = var_event_buffer;
        tmp_args_element_value_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_recursive);
        tmp_args_element_value_6 = par_recursive;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 360;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 361;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_nbytes);
        tmp_args_element_value_9 = var_nbytes;
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 361;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[44], tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 361;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_10 = Py_None;
        tmp_args_element_value_11 = Py_None;
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f7c2c786285476492ba70a413bdb9865, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f7c2c786285476492ba70a413bdb9865, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_e = tmp_assign_source_3;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_e);
        tmp_expression_value_2 = var_e;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[46]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 366;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[48], "li");
    goto try_return_handler_4;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        int tmp_truth_name_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_12 = par_handle;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_13 = par_path;
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = 371;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_4;
    }
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(var_e);
        tmp_raise_type_1 = var_e;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 373;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 354;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f7c2c786285476492ba70a413bdb9865->m_frame) frame_f7c2c786285476492ba70a413bdb9865->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_event_buffer);
        tmp_expression_value_3 = var_event_buffer;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[51]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_nbytes);
            tmp_expression_value_4 = var_nbytes;
            tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
            if (tmp_int_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7c2c786285476492ba70a413bdb9865, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7c2c786285476492ba70a413bdb9865->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7c2c786285476492ba70a413bdb9865, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7c2c786285476492ba70a413bdb9865,
        type_description_1,
        par_handle,
        par_path,
        par_recursive,
        var_event_buffer,
        var_nbytes,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_f7c2c786285476492ba70a413bdb9865 == cache_frame_f7c2c786285476492ba70a413bdb9865) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7c2c786285476492ba70a413bdb9865);
        cache_frame_f7c2c786285476492ba70a413bdb9865 = NULL;
    }

    assertFrameObject(frame_f7c2c786285476492ba70a413bdb9865);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_event_buffer);
    Py_DECREF(var_event_buffer);
    var_event_buffer = NULL;
    CHECK_OBJECT(var_nbytes);
    Py_DECREF(var_nbytes);
    var_nbytes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_event_buffer);
    var_event_buffer = NULL;
    Py_XDECREF(var_nbytes);
    var_nbytes = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_action = python_pars[1];
    PyObject *par_src_path = python_pars[2];
    struct Nuitka_FrameObject *frame_f7507e639d4677e807b9f504edac052c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7507e639d4677e807b9f504edac052c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7507e639d4677e807b9f504edac052c)) {
        Py_XDECREF(cache_frame_f7507e639d4677e807b9f504edac052c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7507e639d4677e807b9f504edac052c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7507e639d4677e807b9f504edac052c = MAKE_FUNCTION_FRAME(tstate, codeobj_f7507e639d4677e807b9f504edac052c, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7507e639d4677e807b9f504edac052c->m_type_description == NULL);
    frame_f7507e639d4677e807b9f504edac052c = cache_frame_f7507e639d4677e807b9f504edac052c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7507e639d4677e807b9f504edac052c);
    assert(Py_REFCNT(frame_f7507e639d4677e807b9f504edac052c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_action);
        tmp_assattr_value_1 = par_action;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_src_path);
        tmp_assattr_value_2 = par_src_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7507e639d4677e807b9f504edac052c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7507e639d4677e807b9f504edac052c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7507e639d4677e807b9f504edac052c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7507e639d4677e807b9f504edac052c,
        type_description_1,
        par_self,
        par_action,
        par_src_path
    );


    // Release cached frame if used for exception.
    if (frame_f7507e639d4677e807b9f504edac052c == cache_frame_f7507e639d4677e807b9f504edac052c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7507e639d4677e807b9f504edac052c);
        cache_frame_f7507e639d4677e807b9f504edac052c = NULL;
    }

    assertFrameObject(frame_f7507e639d4677e807b9f504edac052c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_src_path);
    Py_DECREF(par_src_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_src_path);
    Py_DECREF(par_src_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__13_is_added(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_736f8c8c3ec3713cc7547ccb5f96d521;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_736f8c8c3ec3713cc7547ccb5f96d521 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_736f8c8c3ec3713cc7547ccb5f96d521)) {
        Py_XDECREF(cache_frame_736f8c8c3ec3713cc7547ccb5f96d521);

#if _DEBUG_REFCOUNTS
        if (cache_frame_736f8c8c3ec3713cc7547ccb5f96d521 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_736f8c8c3ec3713cc7547ccb5f96d521 = MAKE_FUNCTION_FRAME(tstate, codeobj_736f8c8c3ec3713cc7547ccb5f96d521, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_736f8c8c3ec3713cc7547ccb5f96d521->m_type_description == NULL);
    frame_736f8c8c3ec3713cc7547ccb5f96d521 = cache_frame_736f8c8c3ec3713cc7547ccb5f96d521;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_736f8c8c3ec3713cc7547ccb5f96d521);
    assert(Py_REFCNT(frame_736f8c8c3ec3713cc7547ccb5f96d521) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_736f8c8c3ec3713cc7547ccb5f96d521, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_736f8c8c3ec3713cc7547ccb5f96d521->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_736f8c8c3ec3713cc7547ccb5f96d521, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_736f8c8c3ec3713cc7547ccb5f96d521,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_736f8c8c3ec3713cc7547ccb5f96d521 == cache_frame_736f8c8c3ec3713cc7547ccb5f96d521) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_736f8c8c3ec3713cc7547ccb5f96d521);
        cache_frame_736f8c8c3ec3713cc7547ccb5f96d521 = NULL;
    }

    assertFrameObject(frame_736f8c8c3ec3713cc7547ccb5f96d521);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__14_is_removed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8925f27bd0070736cabed88fe01ef106;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8925f27bd0070736cabed88fe01ef106 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8925f27bd0070736cabed88fe01ef106)) {
        Py_XDECREF(cache_frame_8925f27bd0070736cabed88fe01ef106);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8925f27bd0070736cabed88fe01ef106 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8925f27bd0070736cabed88fe01ef106 = MAKE_FUNCTION_FRAME(tstate, codeobj_8925f27bd0070736cabed88fe01ef106, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8925f27bd0070736cabed88fe01ef106->m_type_description == NULL);
    frame_8925f27bd0070736cabed88fe01ef106 = cache_frame_8925f27bd0070736cabed88fe01ef106;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8925f27bd0070736cabed88fe01ef106);
    assert(Py_REFCNT(frame_8925f27bd0070736cabed88fe01ef106) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8925f27bd0070736cabed88fe01ef106, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8925f27bd0070736cabed88fe01ef106->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8925f27bd0070736cabed88fe01ef106, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8925f27bd0070736cabed88fe01ef106,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8925f27bd0070736cabed88fe01ef106 == cache_frame_8925f27bd0070736cabed88fe01ef106) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8925f27bd0070736cabed88fe01ef106);
        cache_frame_8925f27bd0070736cabed88fe01ef106 = NULL;
    }

    assertFrameObject(frame_8925f27bd0070736cabed88fe01ef106);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__15_is_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e494bf4704195f404e06b1d0d49527a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e494bf4704195f404e06b1d0d49527a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e494bf4704195f404e06b1d0d49527a3)) {
        Py_XDECREF(cache_frame_e494bf4704195f404e06b1d0d49527a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e494bf4704195f404e06b1d0d49527a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e494bf4704195f404e06b1d0d49527a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_e494bf4704195f404e06b1d0d49527a3, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e494bf4704195f404e06b1d0d49527a3->m_type_description == NULL);
    frame_e494bf4704195f404e06b1d0d49527a3 = cache_frame_e494bf4704195f404e06b1d0d49527a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e494bf4704195f404e06b1d0d49527a3);
    assert(Py_REFCNT(frame_e494bf4704195f404e06b1d0d49527a3) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e494bf4704195f404e06b1d0d49527a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e494bf4704195f404e06b1d0d49527a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e494bf4704195f404e06b1d0d49527a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e494bf4704195f404e06b1d0d49527a3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e494bf4704195f404e06b1d0d49527a3 == cache_frame_e494bf4704195f404e06b1d0d49527a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e494bf4704195f404e06b1d0d49527a3);
        cache_frame_e494bf4704195f404e06b1d0d49527a3 = NULL;
    }

    assertFrameObject(frame_e494bf4704195f404e06b1d0d49527a3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__16_is_renamed_old(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c1e15a92f7133635a4686be5559eb2c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1e15a92f7133635a4686be5559eb2c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1e15a92f7133635a4686be5559eb2c1)) {
        Py_XDECREF(cache_frame_c1e15a92f7133635a4686be5559eb2c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1e15a92f7133635a4686be5559eb2c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1e15a92f7133635a4686be5559eb2c1 = MAKE_FUNCTION_FRAME(tstate, codeobj_c1e15a92f7133635a4686be5559eb2c1, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1e15a92f7133635a4686be5559eb2c1->m_type_description == NULL);
    frame_c1e15a92f7133635a4686be5559eb2c1 = cache_frame_c1e15a92f7133635a4686be5559eb2c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c1e15a92f7133635a4686be5559eb2c1);
    assert(Py_REFCNT(frame_c1e15a92f7133635a4686be5559eb2c1) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1e15a92f7133635a4686be5559eb2c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1e15a92f7133635a4686be5559eb2c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1e15a92f7133635a4686be5559eb2c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1e15a92f7133635a4686be5559eb2c1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c1e15a92f7133635a4686be5559eb2c1 == cache_frame_c1e15a92f7133635a4686be5559eb2c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1e15a92f7133635a4686be5559eb2c1);
        cache_frame_c1e15a92f7133635a4686be5559eb2c1 = NULL;
    }

    assertFrameObject(frame_c1e15a92f7133635a4686be5559eb2c1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__17_is_renamed_new(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f6821a14a6da9cfc044e228dc907c2a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6821a14a6da9cfc044e228dc907c2a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6821a14a6da9cfc044e228dc907c2a7)) {
        Py_XDECREF(cache_frame_f6821a14a6da9cfc044e228dc907c2a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6821a14a6da9cfc044e228dc907c2a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6821a14a6da9cfc044e228dc907c2a7 = MAKE_FUNCTION_FRAME(tstate, codeobj_f6821a14a6da9cfc044e228dc907c2a7, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6821a14a6da9cfc044e228dc907c2a7->m_type_description == NULL);
    frame_f6821a14a6da9cfc044e228dc907c2a7 = cache_frame_f6821a14a6da9cfc044e228dc907c2a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f6821a14a6da9cfc044e228dc907c2a7);
    assert(Py_REFCNT(frame_f6821a14a6da9cfc044e228dc907c2a7) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6821a14a6da9cfc044e228dc907c2a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6821a14a6da9cfc044e228dc907c2a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6821a14a6da9cfc044e228dc907c2a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6821a14a6da9cfc044e228dc907c2a7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f6821a14a6da9cfc044e228dc907c2a7 == cache_frame_f6821a14a6da9cfc044e228dc907c2a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6821a14a6da9cfc044e228dc907c2a7);
        cache_frame_f6821a14a6da9cfc044e228dc907c2a7 = NULL;
    }

    assertFrameObject(frame_f6821a14a6da9cfc044e228dc907c2a7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__18_is_removed_self(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7486540626f9a9d9f3aea490305bbd54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7486540626f9a9d9f3aea490305bbd54 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7486540626f9a9d9f3aea490305bbd54)) {
        Py_XDECREF(cache_frame_7486540626f9a9d9f3aea490305bbd54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7486540626f9a9d9f3aea490305bbd54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7486540626f9a9d9f3aea490305bbd54 = MAKE_FUNCTION_FRAME(tstate, codeobj_7486540626f9a9d9f3aea490305bbd54, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7486540626f9a9d9f3aea490305bbd54->m_type_description == NULL);
    frame_7486540626f9a9d9f3aea490305bbd54 = cache_frame_7486540626f9a9d9f3aea490305bbd54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7486540626f9a9d9f3aea490305bbd54);
    assert(Py_REFCNT(frame_7486540626f9a9d9f3aea490305bbd54) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7486540626f9a9d9f3aea490305bbd54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7486540626f9a9d9f3aea490305bbd54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7486540626f9a9d9f3aea490305bbd54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7486540626f9a9d9f3aea490305bbd54,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7486540626f9a9d9f3aea490305bbd54 == cache_frame_7486540626f9a9d9f3aea490305bbd54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7486540626f9a9d9f3aea490305bbd54);
        cache_frame_7486540626f9a9d9f3aea490305bbd54 = NULL;
    }

    assertFrameObject(frame_7486540626f9a9d9f3aea490305bbd54);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__19___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_669725e2b869eee62ce7051be2bdeec2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_669725e2b869eee62ce7051be2bdeec2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_669725e2b869eee62ce7051be2bdeec2)) {
        Py_XDECREF(cache_frame_669725e2b869eee62ce7051be2bdeec2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_669725e2b869eee62ce7051be2bdeec2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_669725e2b869eee62ce7051be2bdeec2 = MAKE_FUNCTION_FRAME(tstate, codeobj_669725e2b869eee62ce7051be2bdeec2, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_669725e2b869eee62ce7051be2bdeec2->m_type_description == NULL);
    frame_669725e2b869eee62ce7051be2bdeec2 = cache_frame_669725e2b869eee62ce7051be2bdeec2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_669725e2b869eee62ce7051be2bdeec2);
    assert(Py_REFCNT(frame_669725e2b869eee62ce7051be2bdeec2) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[61];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[62]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[63];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[53]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[63];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[65];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[54]);
            if (tmp_operand_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[63];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[66];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[63], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_669725e2b869eee62ce7051be2bdeec2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_669725e2b869eee62ce7051be2bdeec2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_669725e2b869eee62ce7051be2bdeec2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_669725e2b869eee62ce7051be2bdeec2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_669725e2b869eee62ce7051be2bdeec2 == cache_frame_669725e2b869eee62ce7051be2bdeec2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_669725e2b869eee62ce7051be2bdeec2);
        cache_frame_669725e2b869eee62ce7051be2bdeec2 = NULL;
    }

    assertFrameObject(frame_669725e2b869eee62ce7051be2bdeec2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__20_read_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    PyObject *var_buf = NULL;
    PyObject *var_nbytes = NULL;
    PyObject *var_events = NULL;
    PyObject *outline_0_var_action = NULL;
    PyObject *outline_0_var_src_path = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ab2436eb20e22515f2f4253222604797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_ab2436eb20e22515f2f4253222604797 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab2436eb20e22515f2f4253222604797)) {
        Py_XDECREF(cache_frame_ab2436eb20e22515f2f4253222604797);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab2436eb20e22515f2f4253222604797 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab2436eb20e22515f2f4253222604797 = MAKE_FUNCTION_FRAME(tstate, codeobj_ab2436eb20e22515f2f4253222604797, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab2436eb20e22515f2f4253222604797->m_type_description == NULL);
    frame_ab2436eb20e22515f2f4253222604797 = cache_frame_ab2436eb20e22515f2f4253222604797;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ab2436eb20e22515f2f4253222604797);
    assert(Py_REFCNT(frame_ab2436eb20e22515f2f4253222604797) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_value_1 = par_handle;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        CHECK_OBJECT(par_recursive);
        tmp_args_element_value_3 = par_recursive;
        frame_ab2436eb20e22515f2f4253222604797->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 414;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 414;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 414;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 414;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_buf == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_buf = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_nbytes == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_nbytes = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_value_4 = var_buf;
        CHECK_OBJECT(var_nbytes);
        tmp_args_element_value_5 = var_nbytes;
        frame_ab2436eb20e22515f2f4253222604797->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_events == NULL);
        var_events = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_events);
        tmp_iter_arg_2 = var_events;
        tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 416;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 416;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
            tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 416;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
            tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 416;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[68];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 416;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
    tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
    tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
    tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
    tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_1;
        {
            PyObject *old = outline_0_var_action;
            outline_0_var_action = tmp_assign_source_13;
            Py_INCREF(outline_0_var_action);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
    tmp_listcomp$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_listcomp$tuple_unpack_1__element_2;
        {
            PyObject *old = outline_0_var_src_path;
            outline_0_var_src_path = tmp_assign_source_14;
            Py_INCREF(outline_0_var_src_path);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
    tmp_listcomp$tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(outline_0_var_action);
        tmp_args_element_value_6 = outline_0_var_action;
        CHECK_OBJECT(outline_0_var_src_path);
        tmp_args_element_value_7 = outline_0_var_src_path;
        frame_ab2436eb20e22515f2f4253222604797->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_append_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 416;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto try_return_handler_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(outline_0_var_action);
    outline_0_var_action = NULL;
    Py_XDECREF(outline_0_var_src_path);
    outline_0_var_src_path = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_action);
    outline_0_var_action = NULL;
    Py_XDECREF(outline_0_var_src_path);
    outline_0_var_src_path = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 416;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab2436eb20e22515f2f4253222604797, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab2436eb20e22515f2f4253222604797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab2436eb20e22515f2f4253222604797, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab2436eb20e22515f2f4253222604797,
        type_description_1,
        par_handle,
        par_path,
        par_recursive,
        var_buf,
        var_nbytes,
        var_events
    );


    // Release cached frame if used for exception.
    if (frame_ab2436eb20e22515f2f4253222604797 == cache_frame_ab2436eb20e22515f2f4253222604797) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab2436eb20e22515f2f4253222604797);
        cache_frame_ab2436eb20e22515f2f4253222604797 = NULL;
    }

    assertFrameObject(frame_ab2436eb20e22515f2f4253222604797);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_buf);
    Py_DECREF(var_buf);
    var_buf = NULL;
    CHECK_OBJECT(var_nbytes);
    Py_DECREF(var_nbytes);
    var_nbytes = NULL;
    CHECK_OBJECT(var_events);
    Py_DECREF(var_events);
    var_events = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buf);
    var_buf = NULL;
    Py_XDECREF(var_nbytes);
    var_nbytes = NULL;
    Py_XDECREF(var_events);
    var_events = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__10_close_directory_handle,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e7c40ee54b4bbc2a7d36775a3c85789e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__11_read_directory_changes,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7c2c786285476492ba70a413bdb9865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__12___init__,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_f7507e639d4677e807b9f504edac052c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_added() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__13_is_added,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_736f8c8c3ec3713cc7547ccb5f96d521,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_removed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__14_is_removed,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_8925f27bd0070736cabed88fe01ef106,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_modified() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__15_is_modified,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_e494bf4704195f404e06b1d0d49527a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_old() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__16_is_renamed_old,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_c1e15a92f7133635a4686be5559eb2c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_renamed_new() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__17_is_renamed_new,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_f6821a14a6da9cfc044e228dc907c2a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_is_removed_self() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__18_is_removed_self,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_7486540626f9a9d9f3aea490305bbd54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__19___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__19___repr__,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_669725e2b869eee62ce7051be2bdeec2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__1__errcheck_bool,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03b477654638da0fa63b60ec34b781cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__20_read_events() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__20_read_events,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab2436eb20e22515f2f4253222604797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__2__errcheck_handle,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8deb663dd8d1818e232d8b68f5fd5f04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__3__errcheck_dword,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cec0ae01529c1ded00a6434fc945b273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__4_lambda,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34d9f54cbfb86afbef840e13f23962c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__5_lambda,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19b3fc2e11549a794805896ac97cf63f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__6__parse_event_buffer,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1d17e727674fe5748c329ba6d5421eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2739b5cf25b942ee0ccd392a7dac2066,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd8145fe5710eaca306efc3cafeb3547,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__9_get_directory_handle,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e5a11db015756a50afe511fff146a89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_watchdog$observers$winapi[] = {
    impl_watchdog$observers$winapi$$$function__1__errcheck_bool,
    impl_watchdog$observers$winapi$$$function__2__errcheck_handle,
    impl_watchdog$observers$winapi$$$function__3__errcheck_dword,
    impl_watchdog$observers$winapi$$$function__4_lambda,
    impl_watchdog$observers$winapi$$$function__5_lambda,
    impl_watchdog$observers$winapi$$$function__6__parse_event_buffer,
    impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted,
    impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event,
    impl_watchdog$observers$winapi$$$function__9_get_directory_handle,
    impl_watchdog$observers$winapi$$$function__10_close_directory_handle,
    impl_watchdog$observers$winapi$$$function__11_read_directory_changes,
    impl_watchdog$observers$winapi$$$function__12___init__,
    impl_watchdog$observers$winapi$$$function__13_is_added,
    impl_watchdog$observers$winapi$$$function__14_is_removed,
    impl_watchdog$observers$winapi$$$function__15_is_modified,
    impl_watchdog$observers$winapi$$$function__16_is_renamed_old,
    impl_watchdog$observers$winapi$$$function__17_is_renamed_new,
    impl_watchdog$observers$winapi$$$function__18_is_removed_self,
    impl_watchdog$observers$winapi$$$function__19___repr__,
    impl_watchdog$observers$winapi$$$function__20_read_events,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_watchdog$observers$winapi;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_watchdog$observers$winapi) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_watchdog$observers$winapi[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_watchdog$observers$winapi,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_watchdog$observers$winapi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog.observers.winapi");

    // Store the module for future use.
    module_watchdog$observers$winapi = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog.observers.winapi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog.observers.winapi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwatchdog$observers$winapi\n");

    moduledict_watchdog$observers$winapi = MODULE_DICT(module_watchdog$observers$winapi);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$observers$winapi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$winapi,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[63]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$winapi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$winapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$winapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$observers$winapi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$observers$winapi);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_aa9cb4446966d916ebb3e805f7a9a2fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235 = NULL;
    struct Nuitka_FrameObject *frame_8b65b910de83ea001fcdd0b4c79dfe86_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378 = NULL;
    struct Nuitka_FrameObject *frame_b55eace47d4272b3174e3b4e7cf86aa0_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    frame_aa9cb4446966d916ebb3e805f7a9a2fc = MAKE_MODULE_FRAME(codeobj_aa9cb4446966d916ebb3e805f7a9a2fc, module_watchdog$observers$winapi);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa9cb4446966d916ebb3e805f7a9a2fc);
    assert(Py_REFCNT(frame_aa9cb4446966d916ebb3e805f7a9a2fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[75], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[77]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_watchdog$observers$winapi,
                mod_consts[79],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[79]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        IMPORT_HARD_CTYPES__WINTYPES();
        tmp_assign_source_7 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[80]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 48;
        tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[81],
            PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assign_source_33 == NULL)) {
            tmp_assign_source_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        assert(!(tmp_assign_source_33 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assign_source_34 == NULL)) {
            tmp_assign_source_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        assert(!(tmp_assign_source_34 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_assign_source_35 == NULL)) {
            tmp_assign_source_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_41);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[122]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_assign_source_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_42, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_43 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[123]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[123]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[124];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 96;
        tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts[125]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_name_value_1 = mod_consts[62];
        tmp_default_value_1 = mod_consts[127];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_1, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[62]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 96;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_47;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_3;
        }
        frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2 = MAKE_CLASS_FRAME(tstate, codeobj_8ddffac950a3e0a3dc1dcf80bf8bcd37, module_watchdog$observers$winapi, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2);
        assert(Py_REFCNT(frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[131];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[80]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(6);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[132];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[80]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[133];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_10;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_10 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_10 == NULL));
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[42]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[134];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_value_11 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_11 == NULL));
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[42]);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[135];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[80]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[136];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_12;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                    tmp_expression_value_12 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_12 == NULL));
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[137]);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8ddffac950a3e0a3dc1dcf80bf8bcd37_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[124];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_10 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 96;
            tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_48 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96);
        locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96);
        locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_96 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 96;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_48);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 127;
        tmp_assign_source_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[143],
            PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[43]);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_14 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_14 == NULL));
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[146]);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[147], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[148], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_15 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_15 == NULL));
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[137]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM(tmp_assattr_value_5, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_5, 1, tmp_tuple_element_11);
            tmp_expression_value_16 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[42]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_5, 2, tmp_tuple_element_11);
            tmp_expression_value_17 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[146]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_5, 3, tmp_tuple_element_11);
            tmp_expression_value_18 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[42]);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_5, 4, tmp_tuple_element_11);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[149]);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_20 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_20 == NULL));
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[42]);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 138;

                goto tuple_build_exception_8;
            }
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 138;
            tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_5, 5, tmp_tuple_element_11);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_21 == NULL));
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[149]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_args_element_value_2 == NULL)) {
                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 139;

                goto tuple_build_exception_8;
            }
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 139;
            tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_5, 6, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_5, 7, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[150], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[33]);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_23 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_23 == NULL));
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[137]);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        assert(!(tmp_assattr_target_6 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[147], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[148], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_24 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_24 == NULL));
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[151]);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyTuple_SET_ITEM(tmp_assattr_value_8, 0, tmp_tuple_element_12);
            tmp_expression_value_25 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[42]);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_8, 1, tmp_tuple_element_12);
            tmp_expression_value_26 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[42]);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_8, 2, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_8, 3, tmp_tuple_element_12);
            tmp_expression_value_27 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_27 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[42]);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_8, 4, tmp_tuple_element_12);
            tmp_expression_value_28 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[42]);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_8, 5, tmp_tuple_element_12);
            tmp_expression_value_29 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_29 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[137]);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_8, 6, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assattr_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[150], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[40]);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_31 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_31 == NULL));
        tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[146]);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_assattr_target_9 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[147], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_32 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_32 == NULL));
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[137]);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_10, 0, tmp_tuple_element_13);
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[150], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[39]);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_34 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_34 == NULL));
        tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[146]);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_assattr_target_11 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[147], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[148], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_35 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_35 == NULL));
        tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[137]);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_3;
            PyTuple_SET_ITEM(tmp_assattr_value_13, 0, tmp_tuple_element_14);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_36 == NULL));
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[149]);
            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_10;
            }
            tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_args_element_value_3 == NULL)) {
                tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 165;

                goto tuple_build_exception_10;
            }
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 165;
            tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_5);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_13, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[150], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[152]);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_38 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_38 == NULL));
        tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[137]);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        assert(!(tmp_assattr_target_14 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[147], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[148], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_assattr_target_16;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyTuple_SET_ITEM0(tmp_assattr_value_16, 0, tmp_tuple_element_15);
            tmp_expression_value_39 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_39 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[146]);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_16, 1, tmp_tuple_element_15);
            tmp_expression_value_40 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[146]);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_16, 2, tmp_tuple_element_15);
            tmp_expression_value_41 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_41 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[151]);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_16, 3, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_assattr_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[150], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[154]);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_43 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_43 == NULL));
        tmp_assattr_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[146]);
        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        assert(!(tmp_assattr_target_17 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[147], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[148], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_assattr_target_19;
        tmp_expression_value_44 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_44 == NULL));
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[137]);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assattr_value_19, 0, tmp_tuple_element_16);
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[150], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[155]);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_assattr_target_20;
        tmp_expression_value_46 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_46 == NULL));
        tmp_assattr_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[42]);
        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        assert(!(tmp_assattr_target_20 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[147], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[148], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_assattr_target_22;
        tmp_expression_value_47 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_47 == NULL));
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[137]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyTuple_SET_ITEM(tmp_assattr_value_22, 0, tmp_tuple_element_17);
            tmp_expression_value_48 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[42]);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_22, 1, tmp_tuple_element_17);
            tmp_expression_value_49 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[146]);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_22, 2, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_assattr_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[150], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[156]);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_assattr_target_23;
        tmp_expression_value_51 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_51 == NULL));
        tmp_assattr_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[137]);
        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        assert(!(tmp_assattr_target_23 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[147], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[148], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_assattr_target_25;
        tmp_expression_value_52 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_52 == NULL));
        tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[137]);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_25 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyTuple_SET_ITEM(tmp_assattr_value_25, 0, tmp_tuple_element_18);
            tmp_expression_value_53 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_53 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[137]);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_25, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_25, 2, tmp_tuple_element_18);
            tmp_expression_value_54 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[42]);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_25, 3, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_assattr_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[150], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_expression_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[157]);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_assattr_target_26;
        tmp_expression_value_56 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_56 == NULL));
        tmp_assattr_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[146]);
        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        assert(!(tmp_assattr_target_26 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[147], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[148], tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_assattr_target_28;
        tmp_expression_value_57 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_57 == NULL));
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[137]);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_28 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_59;
            PyTuple_SET_ITEM(tmp_assattr_value_28, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_28, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_28, 2, tmp_tuple_element_19);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_58 == NULL));
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[149]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_14;
            }
            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_args_element_value_4 == NULL)) {
                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 209;

                goto tuple_build_exception_14;
            }
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 209;
            tmp_tuple_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_28, 3, tmp_tuple_element_19);
            tmp_expression_value_59 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_59 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[42]);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_28, 4, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_assattr_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[150], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_value_60;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[158]);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_assattr_target_29;
        tmp_expression_value_61 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_61 == NULL));
        tmp_assattr_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[146]);
        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        assert(!(tmp_assattr_target_29 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[147], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        tmp_assattr_value_30 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assattr_value_30 == NULL)) {
            tmp_assattr_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assattr_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[148], tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_assattr_target_31;
        tmp_expression_value_62 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_62 == NULL));
        tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[137]);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_31 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_args_element_value_5;
            PyTuple_SET_ITEM(tmp_assattr_value_31, 0, tmp_tuple_element_20);
            tmp_expression_value_63 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_63 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[42]);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_31, 1, tmp_tuple_element_20);
            tmp_expression_value_64 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_64 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[42]);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_31, 2, tmp_tuple_element_20);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            assert(!(tmp_expression_value_65 == NULL));
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[149]);
            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_args_element_value_5 == NULL)) {
                tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 220;

                goto tuple_build_exception_15;
            }
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 220;
            tmp_tuple_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_31, 3, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_assattr_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[150], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[23]);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_assattr_target_32;
        tmp_expression_value_67 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_67 == NULL));
        tmp_assattr_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[42]);
        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_assattr_target_32 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[147], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[148], tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_assattr_target_34;
        tmp_expression_value_68 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_expression_value_68 == NULL));
        tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[137]);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_34 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyTuple_SET_ITEM(tmp_assattr_value_34, 0, tmp_tuple_element_21);
            tmp_expression_value_69 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_69 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[159]);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_34, 1, tmp_tuple_element_21);
            tmp_expression_value_70 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[42]);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_34, 2, tmp_tuple_element_21);
            tmp_expression_value_71 = IMPORT_HARD_CTYPES__WINTYPES();
            assert(!(tmp_expression_value_71 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[42]);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_34, 3, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_assattr_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[150], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_72;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_72 == NULL));
        tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[122]);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_assign_source_65 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_65, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_66 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_73 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_68;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_74 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[123]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_75 = tmp_class_creation_2__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[123]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_tuple_element_23 = mod_consts[10];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_23 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 235;
        tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_76 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[125]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[126];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_77 = tmp_class_creation_2__metaclass;
        tmp_name_value_2 = mod_consts[62];
        tmp_default_value_2 = mod_consts[127];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_2, tmp_default_value_2);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[62]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 235;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_70;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_6;
        }
        frame_8b65b910de83ea001fcdd0b4c79dfe86_3 = MAKE_CLASS_FRAME(tstate, codeobj_8b65b910de83ea001fcdd0b4c79dfe86, module_watchdog$observers$winapi, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8b65b910de83ea001fcdd0b4c79dfe86_3);
        assert(Py_REFCNT(frame_8b65b910de83ea001fcdd0b4c79dfe86_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_25;
            tmp_tuple_element_25 = mod_consts[20];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_79;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
                tmp_expression_value_79 = IMPORT_HARD_CTYPES__WINTYPES();
                assert(!(tmp_expression_value_79 == NULL));
                tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[42]);
                if (tmp_tuple_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_26 = mod_consts[17];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_80;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
                    tmp_expression_value_80 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_80 == NULL));
                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[42]);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_27 = mod_consts[14];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_81;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_27);
                    tmp_expression_value_81 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_81 == NULL));
                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[42]);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 239;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_28 = mod_consts[11];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyObject *tmp_expression_value_82;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_28);
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
                    }

                    assert(!(tmp_expression_value_82 == NULL));
                    tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[160]);
                    if (tmp_mult_expr_left_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 241;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    tmp_mult_expr_right_1 = mod_consts[83];
                    tmp_tuple_element_28 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 241;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8b65b910de83ea001fcdd0b4c79dfe86_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8b65b910de83ea001fcdd0b4c79dfe86_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8b65b910de83ea001fcdd0b4c79dfe86_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8b65b910de83ea001fcdd0b4c79dfe86_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_8b65b910de83ea001fcdd0b4c79dfe86_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_9 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_29 = mod_consts[10];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_29 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 235;
            tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_71 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_71);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235);
        locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235);
        locals_watchdog$observers$winapi$$$class__2_FILE_NOTIFY_INFORMATION_235 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 235;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_71);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_83 == NULL));
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[149]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 245;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_assign_source_74 == NULL)) {
            tmp_assign_source_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_list_element_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_7 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda();

        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_args_element_value_8, 0, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_args_element_value_8, 1, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_args_element_value_8, 2, tmp_list_element_3);
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_list_element_4;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_9 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda();

        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = MAKE_LIST_EMPTY(8);
        PyList_SET_ITEM0(tmp_args_element_value_10, 0, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 1, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 2, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 3, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 4, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 5, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 6, tmp_list_element_4);
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_args_element_value_10, 7, tmp_list_element_4);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;


        tmp_assign_source_81 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;


        tmp_assign_source_83 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[129], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[130], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$winapi$$$function__12___init__();

        tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_b55eace47d4272b3174e3b4e7cf86aa0_4 = MAKE_CLASS_FRAME(tstate, codeobj_b55eace47d4272b3174e3b4e7cf86aa0, module_watchdog$observers$winapi, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b55eace47d4272b3174e3b4e7cf86aa0_4);
        assert(Py_REFCNT(frame_b55eace47d4272b3174e3b4e7cf86aa0_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_added();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 383;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[168], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_removed();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 387;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_13 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_modified();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 391;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_old();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 395;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_15 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_renamed_new();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 399;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_16 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_is_removed_self();

            frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame.f_lineno = 403;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b55eace47d4272b3174e3b4e7cf86aa0_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b55eace47d4272b3174e3b4e7cf86aa0_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b55eace47d4272b3174e3b4e7cf86aa0_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b55eace47d4272b3174e3b4e7cf86aa0_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_b55eace47d4272b3174e3b4e7cf86aa0_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;


        tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$winapi$$$function__19___repr__();

        tmp_res = PyDict_SetItem(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_19 = (PyObject *)&PyType_Type;
            tmp_tuple_element_30 = mod_consts[70];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[182];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame.f_lineno = 378;
            tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_88;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_87 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_87);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378);
        locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378);
        locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_378 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 378;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_87);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa9cb4446966d916ebb3e805f7a9a2fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa9cb4446966d916ebb3e805f7a9a2fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa9cb4446966d916ebb3e805f7a9a2fc, exception_lineno);
    }



    assertFrameObject(frame_aa9cb4446966d916ebb3e805f7a9a2fc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_89;


        tmp_assign_source_89 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__20_read_events();

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_89);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog.observers.winapi", false);

    Py_INCREF(module_watchdog$observers$winapi);
    return module_watchdog$observers$winapi;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$observers$winapi", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
