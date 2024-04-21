/* Generated code for Python module 'watchdog.utils.dirsnapshot'
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

/* The "module_watchdog$utils$dirsnapshot" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$utils$dirsnapshot;
PyDictObject *moduledict_watchdog$utils$dirsnapshot;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[142];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("watchdog.utils.dirsnapshot"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 142; i++) {
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
void checkModuleConstants_watchdog$utils$dirsnapshot(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 142; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_471dd1f553037de085cf587647dfb828;
static PyCodeObject *codeobj_d24651676217d1d8b1e5591731edd290;
static PyCodeObject *codeobj_d57e9d3412086de667ca8fbc7339a9b7;
static PyCodeObject *codeobj_2429288031b0367d9ec0156c97b4e1a1;
static PyCodeObject *codeobj_3786e2609f3f34bcb793ead099942273;
static PyCodeObject *codeobj_e6d093210f069df6d184db52fd595a33;
static PyCodeObject *codeobj_87f21a988b7a09d8c2aaeb73b4932534;
static PyCodeObject *codeobj_6f7ce18dcc11f874854f29aba0fbae2c;
static PyCodeObject *codeobj_5173ada78e69cab5eecf09187ce3d33c;
static PyCodeObject *codeobj_b1d9f5b9c208d5e845531cb56288f693;
static PyCodeObject *codeobj_52ac0f6bccdb4920aa41dfab802e6973;
static PyCodeObject *codeobj_5848e2d746185252866beefb694407b0;
static PyCodeObject *codeobj_7b3c86c89aadb6329654451a2d55afd6;
static PyCodeObject *codeobj_7d7af83c71dc1c601f418950dd343b6a;
static PyCodeObject *codeobj_9e444ffbeb43fe4bf5e41e82e24eb366;
static PyCodeObject *codeobj_172c343f79159b8f26ec8fc54ef1c13b;
static PyCodeObject *codeobj_4aeb8f6cbed236a62c181fb37c9965f8;
static PyCodeObject *codeobj_3e1bef50af961d539ce59ba8bf6abffd;
static PyCodeObject *codeobj_1a3078494ac079c343965275500e7cb7;
static PyCodeObject *codeobj_c1da0858d8186debac750c4e79eff69f;
static PyCodeObject *codeobj_596797b4989a3ee76632c5300a1630e1;
static PyCodeObject *codeobj_4437baf176e5fa3c41dd1de6bae81d7b;
static PyCodeObject *codeobj_0081ff2eda39bc475eb165a97b8f4216;
static PyCodeObject *codeobj_42fcbd83c2d862d59c287dabfe620959;
static PyCodeObject *codeobj_dabc63b7ab8110383dd3539624ee8aac;
static PyCodeObject *codeobj_24e501c2a75661627c543d549d77ebec;
static PyCodeObject *codeobj_f48d26c3de7ca303e0b06d1b5f51bfd8;
static PyCodeObject *codeobj_e0c52e49e27118e63b5bfeccc8c95b93;
static PyCodeObject *codeobj_e02603da51d17d2e80f41a55d1be0bf7;
static PyCodeObject *codeobj_6e923bc91baa8eb3e98eb8e0218162e2;
static PyCodeObject *codeobj_7f927c8ef0a9e5a9305d19e9d2acaf5e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[127]); CHECK_OBJECT(module_filename_obj);
    codeobj_471dd1f553037de085cf587647dfb828 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_d24651676217d1d8b1e5591731edd290 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_FUTURE_ANNOTATIONS, mod_consts[107], mod_consts[107], mod_consts[129], NULL, 0, 0, 0);
    codeobj_d57e9d3412086de667ca8fbc7339a9b7 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_FUTURE_ANNOTATIONS, mod_consts[67], mod_consts[67], mod_consts[129], NULL, 0, 0, 0);
    codeobj_2429288031b0367d9ec0156c97b4e1a1 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_FUTURE_ANNOTATIONS, mod_consts[123], mod_consts[123], mod_consts[129], NULL, 0, 0, 0);
    codeobj_3786e2609f3f34bcb793ead099942273 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[130], NULL, 5, 0, 0);
    codeobj_e6d093210f069df6d184db52fd595a33 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[131], NULL, 4, 0, 0);
    codeobj_87f21a988b7a09d8c2aaeb73b4932534 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[132], NULL, 1, 0, 0);
    codeobj_6f7ce18dcc11f874854f29aba0fbae2c = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[133], NULL, 1, 0, 0);
    codeobj_5173ada78e69cab5eecf09187ce3d33c = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[86], mod_consts[86], mod_consts[132], NULL, 1, 0, 0);
    codeobj_b1d9f5b9c208d5e845531cb56288f693 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[86], mod_consts[86], mod_consts[132], NULL, 1, 0, 0);
    codeobj_52ac0f6bccdb4920aa41dfab802e6973 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[118], mod_consts[118], mod_consts[134], NULL, 2, 0, 0);
    codeobj_5848e2d746185252866beefb694407b0 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[103], mod_consts[103], mod_consts[132], NULL, 1, 0, 0);
    codeobj_7b3c86c89aadb6329654451a2d55afd6 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[101], mod_consts[101], mod_consts[132], NULL, 1, 0, 0);
    codeobj_7d7af83c71dc1c601f418950dd343b6a = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[97], mod_consts[132], NULL, 1, 0, 0);
    codeobj_9e444ffbeb43fe4bf5e41e82e24eb366 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[132], NULL, 1, 0, 0);
    codeobj_172c343f79159b8f26ec8fc54ef1c13b = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[132], NULL, 1, 0, 0);
    codeobj_4aeb8f6cbed236a62c181fb37c9965f8 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[91], mod_consts[91], mod_consts[132], NULL, 1, 0, 0);
    codeobj_3e1bef50af961d539ce59ba8bf6abffd = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[93], mod_consts[93], mod_consts[132], NULL, 1, 0, 0);
    codeobj_1a3078494ac079c343965275500e7cb7 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[95], mod_consts[95], mod_consts[132], NULL, 1, 0, 0);
    codeobj_c1da0858d8186debac750c4e79eff69f = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[135], NULL, 2, 0, 0);
    codeobj_596797b4989a3ee76632c5300a1630e1 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[135], NULL, 2, 0, 0);
    codeobj_4437baf176e5fa3c41dd1de6bae81d7b = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[8], mod_consts[8], mod_consts[136], NULL, 2, 0, 0);
    codeobj_0081ff2eda39bc475eb165a97b8f4216 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[137], NULL, 2, 0, 0);
    codeobj_42fcbd83c2d862d59c287dabfe620959 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[12], mod_consts[12], mod_consts[137], NULL, 2, 0, 0);
    codeobj_dabc63b7ab8110383dd3539624ee8aac = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[9], mod_consts[9], mod_consts[138], NULL, 1, 0, 0);
    codeobj_24e501c2a75661627c543d549d77ebec = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[9], mod_consts[9], mod_consts[139], NULL, 2, 0, 0);
    codeobj_f48d26c3de7ca303e0b06d1b5f51bfd8 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[132], NULL, 1, 0, 0);
    codeobj_e0c52e49e27118e63b5bfeccc8c95b93 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[132], NULL, 1, 0, 0);
    codeobj_e02603da51d17d2e80f41a55d1be0bf7 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[137], NULL, 2, 0, 0);
    codeobj_6e923bc91baa8eb3e98eb8e0218162e2 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[116], mod_consts[116], mod_consts[137], NULL, 2, 0, 0);
    codeobj_7f927c8ef0a9e5a9305d19e9d2acaf5e = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[44], mod_consts[44], mod_consts[140], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13_walk();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14_paths();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_path();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16_inode();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_isdir();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_mtime();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_size();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_stat_info();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21___sub__();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22___str__();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23___repr__();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_path();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25_paths();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified();


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved();


// The module function definitions.
static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_snapshot = python_pars[2];
    PyObject *par_ignore_device = python_pars[3];
    PyObject *var_created = NULL;
    PyObject *var_deleted = NULL;
    PyObject *var_get_inode = NULL;
    PyObject *var_path = NULL;
    PyObject *var_moved = NULL;
    PyObject *var_inode = NULL;
    PyObject *var_new_path = NULL;
    PyObject *var_old_path = NULL;
    PyObject *var_modified = NULL;
    PyObject *outline_0_var_path = NULL;
    PyObject *outline_1_var_path = NULL;
    PyObject *outline_2_var_path = NULL;
    PyObject *outline_3_var_frm = NULL;
    PyObject *outline_3_var_to = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e6d093210f069df6d184db52fd595a33;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    bool tmp_result;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    static struct Nuitka_FrameObject *cache_frame_e6d093210f069df6d184db52fd595a33 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6d093210f069df6d184db52fd595a33)) {
        Py_XDECREF(cache_frame_e6d093210f069df6d184db52fd595a33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6d093210f069df6d184db52fd595a33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6d093210f069df6d184db52fd595a33 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6d093210f069df6d184db52fd595a33, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6d093210f069df6d184db52fd595a33->m_type_description == NULL);
    frame_e6d093210f069df6d184db52fd595a33 = cache_frame_e6d093210f069df6d184db52fd595a33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6d093210f069df6d184db52fd595a33);
    assert(Py_REFCNT(frame_e6d093210f069df6d184db52fd595a33) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_snapshot);
        tmp_expression_value_1 = par_snapshot;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ref);
        tmp_expression_value_2 = par_ref;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_created == NULL);
        var_created = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_ref);
        tmp_expression_value_3 = par_ref;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_snapshot);
        tmp_expression_value_4 = par_snapshot;
        tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_deleted == NULL);
        var_deleted = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_ignore_device);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_ignore_device);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;


        tmp_assign_source_3 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode();

        assert(var_get_inode == NULL);
        var_get_inode = tmp_assign_source_3;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode();

        assert(var_get_inode == NULL);
        var_get_inode = tmp_assign_source_4;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_ref);
        tmp_expression_value_5 = par_ref;
        tmp_bitand_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[0]);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_snapshot);
        tmp_expression_value_6 = par_snapshot;
        tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[0]);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 97;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_7;
            Py_INCREF(var_path);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (var_get_inode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = var_get_inode;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_ref;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_2 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_get_inode == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_2 = var_get_inode;
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_snapshot;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_4 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        if (var_created == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_created;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_5 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        if (var_deleted == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_deleted;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_6 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PySet_New(NULL);
        assert(var_moved == NULL);
        var_moved = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_set_arg_1;
        if (var_deleted == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_arg_1 = var_deleted;
        tmp_iter_arg_2 = PySet_New(tmp_set_arg_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 104;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_11;
            Py_INCREF(var_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = par_ref;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_7 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 105;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[8], tmp_args_element_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_inode;
            var_inode = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_8;
        if (par_snapshot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = par_snapshot;
        CHECK_OBJECT(var_inode);
        tmp_args_element_value_8 = var_inode;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 106;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[9], tmp_args_element_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_new_path;
            var_new_path = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_new_path);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_new_path);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        if (var_deleted == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 109;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = var_deleted;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_9 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 109;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_tuple_element_1;
        if (var_moved == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_5 = var_moved;
        CHECK_OBJECT(var_path);
        tmp_tuple_element_1 = var_path;
        tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_10, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_new_path);
        tmp_tuple_element_1 = var_new_path;
        PyTuple_SET_ITEM0(tmp_args_element_value_10, 1, tmp_tuple_element_1);
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 110;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[6], tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 104;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_set_arg_2;
        if (var_created == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_arg_2 = var_created;
        tmp_iter_arg_3 = PySet_New(tmp_set_arg_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_16 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_16;
            Py_INCREF(var_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_11;
        if (par_snapshot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_6 = par_snapshot;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_11 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 113;
        tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[8], tmp_args_element_value_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_inode;
            var_inode = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_12;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_7 = par_ref;
        CHECK_OBJECT(var_inode);
        tmp_args_element_value_12 = var_inode;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 114;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[9], tmp_args_element_value_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_old_path;
            var_old_path = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_old_path);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_old_path);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        if (var_created == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_8 = var_created;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_13 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 116;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_tuple_element_2;
        if (var_moved == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_8 = var_moved;
        CHECK_OBJECT(var_old_path);
        tmp_tuple_element_2 = var_old_path;
        tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_14, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_2 = var_path;
        PyTuple_SET_ITEM0(tmp_args_element_value_14, 1, tmp_tuple_element_2);
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 117;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[6], tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PySet_New(NULL);
        assert(var_modified == NULL);
        var_modified = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_ref;
        tmp_bitand_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[0]);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_bitand_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_snapshot;
        tmp_bitand_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[0]);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 122;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_22 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_22;
            Py_INCREF(var_path);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        if (var_get_inode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_value_5 = var_get_inode;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_15 = par_ref;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_16 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_get_inode == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_value_6 = var_get_inode;
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_17 = par_snapshot;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_18 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_22;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_9 = par_ref;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_19 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 124;
        tmp_cmp_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[12], tmp_args_element_value_19);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_10 = par_snapshot;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_20 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 124;
        tmp_cmp_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[12], tmp_args_element_value_20);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_11 = par_ref;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_21 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 124;
        tmp_cmp_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[13], tmp_args_element_value_21);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_12 = par_snapshot;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_22 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 126;
        tmp_cmp_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[13], tmp_args_element_value_22);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_6 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_23;
        if (var_modified == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 127;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_13 = var_modified;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_23 = var_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 127;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts[6], tmp_args_element_value_23);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_6:;
    branch_no_5:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 122;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_5;
        if (var_moved == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_5 = var_moved;
        tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 129;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_5__iter_value;
        tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_26 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 129;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 129;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 129;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 129;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_old_path;
            var_old_path = tmp_assign_source_28;
            Py_INCREF(var_old_path);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_new_path;
            var_new_path = tmp_assign_source_29;
            Py_INCREF(var_new_path);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_27;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_14 = par_ref;
        CHECK_OBJECT(var_old_path);
        tmp_args_element_value_24 = var_old_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 130;
        tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts[12], tmp_args_element_value_24);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_15 = par_snapshot;
        CHECK_OBJECT(var_new_path);
        tmp_args_element_value_25 = var_new_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 130;
        tmp_cmp_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts[12], tmp_args_element_value_25);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (par_ref == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_16 = par_ref;
        CHECK_OBJECT(var_old_path);
        tmp_args_element_value_26 = var_old_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 130;
        tmp_cmp_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts[13], tmp_args_element_value_26);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_snapshot == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_17 = par_snapshot;
        CHECK_OBJECT(var_new_path);
        tmp_args_element_value_27 = var_new_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 132;
        tmp_cmp_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts[13], tmp_args_element_value_27);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_7 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_7 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_28;
        if (var_modified == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_18 = var_modified;
        CHECK_OBJECT(var_old_path);
        tmp_args_element_value_28 = var_old_path;
        frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 133;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts[6], tmp_args_element_value_28);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_7:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 129;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_7;
            if (var_created == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_iter_arg_7 = var_created;
            tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
            if (tmp_assign_source_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_31;
        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_6 = tmp_listcomp_1__$0;
            tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_32 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 135;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_33 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_path;
                outline_0_var_path = tmp_assign_source_33;
                Py_INCREF(outline_0_var_path);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_value_29;
            int tmp_truth_name_4;
            if (par_snapshot == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_called_instance_19 = par_snapshot;
            CHECK_OBJECT(outline_0_var_path);
            tmp_args_element_value_29 = outline_0_var_path;
            frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 135;
            tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_19, mod_consts[16], tmp_args_element_value_29);
            if (tmp_call_result_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_9);
            if (tmp_truth_name_4 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_9);

                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_9);
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_path);
            tmp_append_value_1 = outline_0_var_path;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
        }
        branch_no_8:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_1);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_0_var_path);
        outline_0_var_path = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_path);
        outline_0_var_path = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 135;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_iter_arg_8;
            if (var_deleted == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_iter_arg_8 = var_deleted;
            tmp_assign_source_34 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_35;
        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_7 = tmp_listcomp_2__$0;
            tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_36 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 136;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_37 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_path;
                outline_1_var_path = tmp_assign_source_37;
                Py_INCREF(outline_1_var_path);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_value_30;
            int tmp_truth_name_5;
            if (par_ref == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_called_instance_20 = par_ref;
            CHECK_OBJECT(outline_1_var_path);
            tmp_args_element_value_30 = outline_1_var_path;
            frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 136;
            tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_20, mod_consts[16], tmp_args_element_value_30);
            if (tmp_call_result_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_10);
            if (tmp_truth_name_5 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_10);

                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_condition_result_9 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_10);
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_path);
            tmp_append_value_2 = outline_1_var_path;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
        }
        branch_no_9:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assattr_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assattr_value_2);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_1_var_path);
        outline_1_var_path = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_path);
        outline_1_var_path = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 136;
        goto frame_exception_exit_1;
        outline_result_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_iter_arg_9;
            if (var_modified == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_iter_arg_9 = var_modified;
            tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_13;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            tmp_assign_source_39 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_39;
        }
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_8 = tmp_listcomp_3__$0;
            tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_40 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 137;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_40;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_41 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_path;
                outline_2_var_path = tmp_assign_source_41;
                Py_INCREF(outline_2_var_path);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_call_result_11;
            PyObject *tmp_args_element_value_31;
            int tmp_truth_name_6;
            if (par_ref == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_called_instance_21 = par_ref;
            CHECK_OBJECT(outline_2_var_path);
            tmp_args_element_value_31 = outline_2_var_path;
            frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 137;
            tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_21, mod_consts[16], tmp_args_element_value_31);
            if (tmp_call_result_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_11);
            if (tmp_truth_name_6 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_11);

                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_condition_result_10 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_11);
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_path);
            tmp_append_value_3 = outline_2_var_path;
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
        }
        branch_no_10:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assattr_value_3 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assattr_value_3);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_2_var_path);
        outline_2_var_path = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_path);
        outline_2_var_path = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 137;
        goto frame_exception_exit_1;
        outline_result_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[19], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_iter_arg_10;
            if (var_moved == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_15;
            }

            tmp_iter_arg_10 = var_moved;
            tmp_assign_source_42 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_15;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_43;
        }
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_9 = tmp_listcomp_4__$0;
            tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_44 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 138;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_iter_arg_11 = tmp_listcomp_4__iter_value_0;
            tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_46 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooo";
                exception_lineno = 138;
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_46;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_47 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_47 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooo";
                exception_lineno = 138;
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_47;
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

                        type_description_1 = "ooooooooooooo";
                        exception_lineno = 138;
                        goto try_except_handler_18;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[15];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "ooooooooooooo";
                exception_lineno = 138;
                goto try_except_handler_18;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_17;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_48 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_3_var_frm;
                outline_3_var_frm = tmp_assign_source_48;
                Py_INCREF(outline_3_var_frm);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_49 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_3_var_to;
                outline_3_var_to = tmp_assign_source_49;
                Py_INCREF(outline_3_var_to);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_call_result_12;
            PyObject *tmp_args_element_value_32;
            int tmp_truth_name_7;
            if (par_ref == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_called_instance_22 = par_ref;
            CHECK_OBJECT(outline_3_var_frm);
            tmp_args_element_value_32 = outline_3_var_frm;
            frame_e6d093210f069df6d184db52fd595a33->m_frame.f_lineno = 138;
            tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_22, mod_consts[16], tmp_args_element_value_32);
            if (tmp_call_result_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_12);
            if (tmp_truth_name_7 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_12);

                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_condition_result_11 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_12);
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_frm);
            tmp_tuple_element_3 = outline_3_var_frm;
            tmp_append_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_4, 0, tmp_tuple_element_3);
            CHECK_OBJECT(outline_3_var_to);
            tmp_tuple_element_3 = outline_3_var_to;
            PyTuple_SET_ITEM0(tmp_append_value_4, 1, tmp_tuple_element_3);
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_16;
            }
        }
        branch_no_11:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assattr_value_4 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assattr_value_4);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_XDECREF(outline_3_var_frm);
        outline_3_var_frm = NULL;
        Py_XDECREF(outline_3_var_to);
        outline_3_var_to = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_frm);
        outline_3_var_frm = NULL;
        Py_XDECREF(outline_3_var_to);
        outline_3_var_to = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 138;
        goto frame_exception_exit_1;
        outline_result_4:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[20], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_5;
        if (var_created == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_3 = var_created;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_set_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[17]);
        if (tmp_set_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_3 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[21], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_assattr_target_6;
        if (var_deleted == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_4 = var_deleted;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_set_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[18]);
        if (tmp_set_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = PySet_New(tmp_set_arg_4);
        Py_DECREF(tmp_set_arg_4);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[22], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_7;
        if (var_modified == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_5 = var_modified;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_set_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[19]);
        if (tmp_set_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_5 = PySet_New(tmp_set_arg_5);
        Py_DECREF(tmp_set_arg_5);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_list_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST(tstate, tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[23], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_arg_4;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_set_arg_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_8;
        if (var_moved == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_6 = var_moved;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_set_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[20]);
        if (tmp_set_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_6 = PySet_New(tmp_set_arg_6);
        Py_DECREF(tmp_set_arg_6);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_list_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST(tstate, tmp_list_arg_4);
        Py_DECREF(tmp_list_arg_4);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[24], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6d093210f069df6d184db52fd595a33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6d093210f069df6d184db52fd595a33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6d093210f069df6d184db52fd595a33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6d093210f069df6d184db52fd595a33,
        type_description_1,
        par_self,
        par_ref,
        par_snapshot,
        par_ignore_device,
        var_created,
        var_deleted,
        var_get_inode,
        var_path,
        var_moved,
        var_inode,
        var_new_path,
        var_old_path,
        var_modified
    );


    // Release cached frame if used for exception.
    if (frame_e6d093210f069df6d184db52fd595a33 == cache_frame_e6d093210f069df6d184db52fd595a33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6d093210f069df6d184db52fd595a33);
        cache_frame_e6d093210f069df6d184db52fd595a33 = NULL;
    }

    assertFrameObject(frame_e6d093210f069df6d184db52fd595a33);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_created);
    var_created = NULL;
    Py_XDECREF(var_deleted);
    var_deleted = NULL;
    Py_XDECREF(var_get_inode);
    var_get_inode = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_moved);
    var_moved = NULL;
    Py_XDECREF(var_inode);
    var_inode = NULL;
    Py_XDECREF(var_new_path);
    var_new_path = NULL;
    Py_XDECREF(var_old_path);
    var_old_path = NULL;
    Py_XDECREF(var_modified);
    var_modified = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_created);
    var_created = NULL;
    Py_XDECREF(var_deleted);
    var_deleted = NULL;
    Py_XDECREF(var_get_inode);
    var_get_inode = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_moved);
    var_moved = NULL;
    Py_XDECREF(var_inode);
    var_inode = NULL;
    Py_XDECREF(var_new_path);
    var_new_path = NULL;
    Py_XDECREF(var_old_path);
    var_old_path = NULL;
    Py_XDECREF(var_modified);
    var_modified = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_snapshot);
    Py_DECREF(par_snapshot);
    CHECK_OBJECT(par_ignore_device);
    Py_DECREF(par_ignore_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_snapshot);
    Py_DECREF(par_snapshot);
    CHECK_OBJECT(par_ignore_device);
    Py_DECREF(par_ignore_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_directory = python_pars[0];
    PyObject *par_full_path = python_pars[1];
    struct Nuitka_FrameObject *frame_c1da0858d8186debac750c4e79eff69f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1da0858d8186debac750c4e79eff69f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1da0858d8186debac750c4e79eff69f)) {
        Py_XDECREF(cache_frame_c1da0858d8186debac750c4e79eff69f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1da0858d8186debac750c4e79eff69f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1da0858d8186debac750c4e79eff69f = MAKE_FUNCTION_FRAME(tstate, codeobj_c1da0858d8186debac750c4e79eff69f, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1da0858d8186debac750c4e79eff69f->m_type_description == NULL);
    frame_c1da0858d8186debac750c4e79eff69f = cache_frame_c1da0858d8186debac750c4e79eff69f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c1da0858d8186debac750c4e79eff69f);
    assert(Py_REFCNT(frame_c1da0858d8186debac750c4e79eff69f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_directory);
        tmp_called_instance_1 = par_directory;
        CHECK_OBJECT(par_full_path);
        tmp_args_element_value_1 = par_full_path;
        frame_c1da0858d8186debac750c4e79eff69f->m_frame.f_lineno = 89;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_c1da0858d8186debac750c4e79eff69f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1da0858d8186debac750c4e79eff69f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1da0858d8186debac750c4e79eff69f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1da0858d8186debac750c4e79eff69f,
        type_description_1,
        par_directory,
        par_full_path
    );


    // Release cached frame if used for exception.
    if (frame_c1da0858d8186debac750c4e79eff69f == cache_frame_c1da0858d8186debac750c4e79eff69f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1da0858d8186debac750c4e79eff69f);
        cache_frame_c1da0858d8186debac750c4e79eff69f = NULL;
    }

    assertFrameObject(frame_c1da0858d8186debac750c4e79eff69f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_full_path);
    Py_DECREF(par_full_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_full_path);
    Py_DECREF(par_full_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_directory = python_pars[0];
    PyObject *par_full_path = python_pars[1];
    struct Nuitka_FrameObject *frame_596797b4989a3ee76632c5300a1630e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_596797b4989a3ee76632c5300a1630e1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_596797b4989a3ee76632c5300a1630e1)) {
        Py_XDECREF(cache_frame_596797b4989a3ee76632c5300a1630e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_596797b4989a3ee76632c5300a1630e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_596797b4989a3ee76632c5300a1630e1 = MAKE_FUNCTION_FRAME(tstate, codeobj_596797b4989a3ee76632c5300a1630e1, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_596797b4989a3ee76632c5300a1630e1->m_type_description == NULL);
    frame_596797b4989a3ee76632c5300a1630e1 = cache_frame_596797b4989a3ee76632c5300a1630e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_596797b4989a3ee76632c5300a1630e1);
    assert(Py_REFCNT(frame_596797b4989a3ee76632c5300a1630e1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_directory);
        tmp_called_instance_1 = par_directory;
        CHECK_OBJECT(par_full_path);
        tmp_args_element_value_1 = par_full_path;
        frame_596797b4989a3ee76632c5300a1630e1->m_frame.f_lineno = 94;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_596797b4989a3ee76632c5300a1630e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_596797b4989a3ee76632c5300a1630e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_596797b4989a3ee76632c5300a1630e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_596797b4989a3ee76632c5300a1630e1,
        type_description_1,
        par_directory,
        par_full_path
    );


    // Release cached frame if used for exception.
    if (frame_596797b4989a3ee76632c5300a1630e1 == cache_frame_596797b4989a3ee76632c5300a1630e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_596797b4989a3ee76632c5300a1630e1);
        cache_frame_596797b4989a3ee76632c5300a1630e1 = NULL;
    }

    assertFrameObject(frame_596797b4989a3ee76632c5300a1630e1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_full_path);
    Py_DECREF(par_full_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_full_path);
    Py_DECREF(par_full_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5173ada78e69cab5eecf09187ce3d33c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5173ada78e69cab5eecf09187ce3d33c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5173ada78e69cab5eecf09187ce3d33c)) {
        Py_XDECREF(cache_frame_5173ada78e69cab5eecf09187ce3d33c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5173ada78e69cab5eecf09187ce3d33c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5173ada78e69cab5eecf09187ce3d33c = MAKE_FUNCTION_FRAME(tstate, codeobj_5173ada78e69cab5eecf09187ce3d33c, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5173ada78e69cab5eecf09187ce3d33c->m_type_description == NULL);
    frame_5173ada78e69cab5eecf09187ce3d33c = cache_frame_5173ada78e69cab5eecf09187ce3d33c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5173ada78e69cab5eecf09187ce3d33c);
    assert(Py_REFCNT(frame_5173ada78e69cab5eecf09187ce3d33c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5173ada78e69cab5eecf09187ce3d33c->m_frame.f_lineno = 146;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_5173ada78e69cab5eecf09187ce3d33c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5173ada78e69cab5eecf09187ce3d33c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5173ada78e69cab5eecf09187ce3d33c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5173ada78e69cab5eecf09187ce3d33c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5173ada78e69cab5eecf09187ce3d33c == cache_frame_5173ada78e69cab5eecf09187ce3d33c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5173ada78e69cab5eecf09187ce3d33c);
        cache_frame_5173ada78e69cab5eecf09187ce3d33c = NULL;
    }

    assertFrameObject(frame_5173ada78e69cab5eecf09187ce3d33c);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__3___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6f7ce18dcc11f874854f29aba0fbae2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f7ce18dcc11f874854f29aba0fbae2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f7ce18dcc11f874854f29aba0fbae2c)) {
        Py_XDECREF(cache_frame_6f7ce18dcc11f874854f29aba0fbae2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f7ce18dcc11f874854f29aba0fbae2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f7ce18dcc11f874854f29aba0fbae2c = MAKE_FUNCTION_FRAME(tstate, codeobj_6f7ce18dcc11f874854f29aba0fbae2c, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f7ce18dcc11f874854f29aba0fbae2c->m_type_description == NULL);
    frame_6f7ce18dcc11f874854f29aba0fbae2c = cache_frame_6f7ce18dcc11f874854f29aba0fbae2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f7ce18dcc11f874854f29aba0fbae2c);
    assert(Py_REFCNT(frame_6f7ce18dcc11f874854f29aba0fbae2c) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_len_arg_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_9_1;
        PyObject *tmp_len_arg_8;
        PyObject *tmp_expression_value_9;
        tmp_kw_call_arg_value_0_1 = mod_consts[27];
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[21]);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 155;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 155;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[22]);
        if (tmp_len_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 156;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 156;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[23]);
        if (tmp_len_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 157;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 157;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_len_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[24]);
        if (tmp_len_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 158;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_5_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        Py_DECREF(tmp_len_arg_4);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 158;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_len_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
        if (tmp_len_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 159;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_6_1 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        Py_DECREF(tmp_len_arg_5);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 159;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_len_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[18]);
        if (tmp_len_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 160;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_7_1 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        Py_DECREF(tmp_len_arg_6);
        if (tmp_kw_call_arg_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 160;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_len_arg_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[19]);
        if (tmp_len_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);

            exception_lineno = 161;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_8_1 = BUILTIN_LEN(tstate, tmp_len_arg_7);
        Py_DECREF(tmp_len_arg_7);
        if (tmp_kw_call_arg_value_8_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);

            exception_lineno = 161;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_len_arg_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
        if (tmp_len_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);
            Py_DECREF(tmp_kw_call_arg_value_8_1);

            exception_lineno = 162;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_9_1 = BUILTIN_LEN(tstate, tmp_len_arg_8);
        Py_DECREF(tmp_len_arg_8);
        if (tmp_kw_call_arg_value_9_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);
            Py_DECREF(tmp_kw_call_arg_value_8_1);

            exception_lineno = 162;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_6f7ce18dcc11f874854f29aba0fbae2c->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        Py_DECREF(tmp_kw_call_arg_value_7_1);
        Py_DECREF(tmp_kw_call_arg_value_8_1);
        Py_DECREF(tmp_kw_call_arg_value_9_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_6f7ce18dcc11f874854f29aba0fbae2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f7ce18dcc11f874854f29aba0fbae2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f7ce18dcc11f874854f29aba0fbae2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f7ce18dcc11f874854f29aba0fbae2c,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_6f7ce18dcc11f874854f29aba0fbae2c == cache_frame_6f7ce18dcc11f874854f29aba0fbae2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f7ce18dcc11f874854f29aba0fbae2c);
        cache_frame_6f7ce18dcc11f874854f29aba0fbae2c = NULL;
    }

    assertFrameObject(frame_6f7ce18dcc11f874854f29aba0fbae2c);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__4_files_created(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_172c343f79159b8f26ec8fc54ef1c13b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_172c343f79159b8f26ec8fc54ef1c13b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_172c343f79159b8f26ec8fc54ef1c13b)) {
        Py_XDECREF(cache_frame_172c343f79159b8f26ec8fc54ef1c13b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_172c343f79159b8f26ec8fc54ef1c13b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_172c343f79159b8f26ec8fc54ef1c13b = MAKE_FUNCTION_FRAME(tstate, codeobj_172c343f79159b8f26ec8fc54ef1c13b, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_172c343f79159b8f26ec8fc54ef1c13b->m_type_description == NULL);
    frame_172c343f79159b8f26ec8fc54ef1c13b = cache_frame_172c343f79159b8f26ec8fc54ef1c13b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_172c343f79159b8f26ec8fc54ef1c13b);
    assert(Py_REFCNT(frame_172c343f79159b8f26ec8fc54ef1c13b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_172c343f79159b8f26ec8fc54ef1c13b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_172c343f79159b8f26ec8fc54ef1c13b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_172c343f79159b8f26ec8fc54ef1c13b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_172c343f79159b8f26ec8fc54ef1c13b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_172c343f79159b8f26ec8fc54ef1c13b == cache_frame_172c343f79159b8f26ec8fc54ef1c13b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_172c343f79159b8f26ec8fc54ef1c13b);
        cache_frame_172c343f79159b8f26ec8fc54ef1c13b = NULL;
    }

    assertFrameObject(frame_172c343f79159b8f26ec8fc54ef1c13b);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4aeb8f6cbed236a62c181fb37c9965f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4aeb8f6cbed236a62c181fb37c9965f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4aeb8f6cbed236a62c181fb37c9965f8)) {
        Py_XDECREF(cache_frame_4aeb8f6cbed236a62c181fb37c9965f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4aeb8f6cbed236a62c181fb37c9965f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4aeb8f6cbed236a62c181fb37c9965f8 = MAKE_FUNCTION_FRAME(tstate, codeobj_4aeb8f6cbed236a62c181fb37c9965f8, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4aeb8f6cbed236a62c181fb37c9965f8->m_type_description == NULL);
    frame_4aeb8f6cbed236a62c181fb37c9965f8 = cache_frame_4aeb8f6cbed236a62c181fb37c9965f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4aeb8f6cbed236a62c181fb37c9965f8);
    assert(Py_REFCNT(frame_4aeb8f6cbed236a62c181fb37c9965f8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_4aeb8f6cbed236a62c181fb37c9965f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4aeb8f6cbed236a62c181fb37c9965f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4aeb8f6cbed236a62c181fb37c9965f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4aeb8f6cbed236a62c181fb37c9965f8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4aeb8f6cbed236a62c181fb37c9965f8 == cache_frame_4aeb8f6cbed236a62c181fb37c9965f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4aeb8f6cbed236a62c181fb37c9965f8);
        cache_frame_4aeb8f6cbed236a62c181fb37c9965f8 = NULL;
    }

    assertFrameObject(frame_4aeb8f6cbed236a62c181fb37c9965f8);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__6_files_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e1bef50af961d539ce59ba8bf6abffd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e1bef50af961d539ce59ba8bf6abffd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e1bef50af961d539ce59ba8bf6abffd)) {
        Py_XDECREF(cache_frame_3e1bef50af961d539ce59ba8bf6abffd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e1bef50af961d539ce59ba8bf6abffd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e1bef50af961d539ce59ba8bf6abffd = MAKE_FUNCTION_FRAME(tstate, codeobj_3e1bef50af961d539ce59ba8bf6abffd, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e1bef50af961d539ce59ba8bf6abffd->m_type_description == NULL);
    frame_3e1bef50af961d539ce59ba8bf6abffd = cache_frame_3e1bef50af961d539ce59ba8bf6abffd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e1bef50af961d539ce59ba8bf6abffd);
    assert(Py_REFCNT(frame_3e1bef50af961d539ce59ba8bf6abffd) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_3e1bef50af961d539ce59ba8bf6abffd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e1bef50af961d539ce59ba8bf6abffd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e1bef50af961d539ce59ba8bf6abffd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e1bef50af961d539ce59ba8bf6abffd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e1bef50af961d539ce59ba8bf6abffd == cache_frame_3e1bef50af961d539ce59ba8bf6abffd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e1bef50af961d539ce59ba8bf6abffd);
        cache_frame_3e1bef50af961d539ce59ba8bf6abffd = NULL;
    }

    assertFrameObject(frame_3e1bef50af961d539ce59ba8bf6abffd);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__7_files_moved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a3078494ac079c343965275500e7cb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a3078494ac079c343965275500e7cb7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a3078494ac079c343965275500e7cb7)) {
        Py_XDECREF(cache_frame_1a3078494ac079c343965275500e7cb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a3078494ac079c343965275500e7cb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a3078494ac079c343965275500e7cb7 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a3078494ac079c343965275500e7cb7, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a3078494ac079c343965275500e7cb7->m_type_description == NULL);
    frame_1a3078494ac079c343965275500e7cb7 = cache_frame_1a3078494ac079c343965275500e7cb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a3078494ac079c343965275500e7cb7);
    assert(Py_REFCNT(frame_1a3078494ac079c343965275500e7cb7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_1a3078494ac079c343965275500e7cb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a3078494ac079c343965275500e7cb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a3078494ac079c343965275500e7cb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a3078494ac079c343965275500e7cb7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1a3078494ac079c343965275500e7cb7 == cache_frame_1a3078494ac079c343965275500e7cb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a3078494ac079c343965275500e7cb7);
        cache_frame_1a3078494ac079c343965275500e7cb7 = NULL;
    }

    assertFrameObject(frame_1a3078494ac079c343965275500e7cb7);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7d7af83c71dc1c601f418950dd343b6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d7af83c71dc1c601f418950dd343b6a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d7af83c71dc1c601f418950dd343b6a)) {
        Py_XDECREF(cache_frame_7d7af83c71dc1c601f418950dd343b6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d7af83c71dc1c601f418950dd343b6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d7af83c71dc1c601f418950dd343b6a = MAKE_FUNCTION_FRAME(tstate, codeobj_7d7af83c71dc1c601f418950dd343b6a, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d7af83c71dc1c601f418950dd343b6a->m_type_description == NULL);
    frame_7d7af83c71dc1c601f418950dd343b6a = cache_frame_7d7af83c71dc1c601f418950dd343b6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d7af83c71dc1c601f418950dd343b6a);
    assert(Py_REFCNT(frame_7d7af83c71dc1c601f418950dd343b6a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_7d7af83c71dc1c601f418950dd343b6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d7af83c71dc1c601f418950dd343b6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d7af83c71dc1c601f418950dd343b6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d7af83c71dc1c601f418950dd343b6a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7d7af83c71dc1c601f418950dd343b6a == cache_frame_7d7af83c71dc1c601f418950dd343b6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d7af83c71dc1c601f418950dd343b6a);
        cache_frame_7d7af83c71dc1c601f418950dd343b6a = NULL;
    }

    assertFrameObject(frame_7d7af83c71dc1c601f418950dd343b6a);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9e444ffbeb43fe4bf5e41e82e24eb366;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366)) {
        Py_XDECREF(cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366 = MAKE_FUNCTION_FRAME(tstate, codeobj_9e444ffbeb43fe4bf5e41e82e24eb366, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366->m_type_description == NULL);
    frame_9e444ffbeb43fe4bf5e41e82e24eb366 = cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9e444ffbeb43fe4bf5e41e82e24eb366);
    assert(Py_REFCNT(frame_9e444ffbeb43fe4bf5e41e82e24eb366) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_9e444ffbeb43fe4bf5e41e82e24eb366, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e444ffbeb43fe4bf5e41e82e24eb366->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e444ffbeb43fe4bf5e41e82e24eb366, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e444ffbeb43fe4bf5e41e82e24eb366,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9e444ffbeb43fe4bf5e41e82e24eb366 == cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366);
        cache_frame_9e444ffbeb43fe4bf5e41e82e24eb366 = NULL;
    }

    assertFrameObject(frame_9e444ffbeb43fe4bf5e41e82e24eb366);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7b3c86c89aadb6329654451a2d55afd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7b3c86c89aadb6329654451a2d55afd6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7b3c86c89aadb6329654451a2d55afd6)) {
        Py_XDECREF(cache_frame_7b3c86c89aadb6329654451a2d55afd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b3c86c89aadb6329654451a2d55afd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b3c86c89aadb6329654451a2d55afd6 = MAKE_FUNCTION_FRAME(tstate, codeobj_7b3c86c89aadb6329654451a2d55afd6, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b3c86c89aadb6329654451a2d55afd6->m_type_description == NULL);
    frame_7b3c86c89aadb6329654451a2d55afd6 = cache_frame_7b3c86c89aadb6329654451a2d55afd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7b3c86c89aadb6329654451a2d55afd6);
    assert(Py_REFCNT(frame_7b3c86c89aadb6329654451a2d55afd6) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_7b3c86c89aadb6329654451a2d55afd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b3c86c89aadb6329654451a2d55afd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b3c86c89aadb6329654451a2d55afd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b3c86c89aadb6329654451a2d55afd6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7b3c86c89aadb6329654451a2d55afd6 == cache_frame_7b3c86c89aadb6329654451a2d55afd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b3c86c89aadb6329654451a2d55afd6);
        cache_frame_7b3c86c89aadb6329654451a2d55afd6 = NULL;
    }

    assertFrameObject(frame_7b3c86c89aadb6329654451a2d55afd6);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5848e2d746185252866beefb694407b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5848e2d746185252866beefb694407b0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5848e2d746185252866beefb694407b0)) {
        Py_XDECREF(cache_frame_5848e2d746185252866beefb694407b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5848e2d746185252866beefb694407b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5848e2d746185252866beefb694407b0 = MAKE_FUNCTION_FRAME(tstate, codeobj_5848e2d746185252866beefb694407b0, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5848e2d746185252866beefb694407b0->m_type_description == NULL);
    frame_5848e2d746185252866beefb694407b0 = cache_frame_5848e2d746185252866beefb694407b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5848e2d746185252866beefb694407b0);
    assert(Py_REFCNT(frame_5848e2d746185252866beefb694407b0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_5848e2d746185252866beefb694407b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5848e2d746185252866beefb694407b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5848e2d746185252866beefb694407b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5848e2d746185252866beefb694407b0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5848e2d746185252866beefb694407b0 == cache_frame_5848e2d746185252866beefb694407b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5848e2d746185252866beefb694407b0);
        cache_frame_5848e2d746185252866beefb694407b0 = NULL;
    }

    assertFrameObject(frame_5848e2d746185252866beefb694407b0);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    PyObject *par_stat = python_pars[3];
    PyObject *par_listdir = python_pars[4];
    PyObject *var_st = NULL;
    PyObject *var_p = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3786e2609f3f34bcb793ead099942273;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3786e2609f3f34bcb793ead099942273 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3786e2609f3f34bcb793ead099942273)) {
        Py_XDECREF(cache_frame_3786e2609f3f34bcb793ead099942273);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3786e2609f3f34bcb793ead099942273 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3786e2609f3f34bcb793ead099942273 = MAKE_FUNCTION_FRAME(tstate, codeobj_3786e2609f3f34bcb793ead099942273, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3786e2609f3f34bcb793ead099942273->m_type_description == NULL);
    frame_3786e2609f3f34bcb793ead099942273 = cache_frame_3786e2609f3f34bcb793ead099942273;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3786e2609f3f34bcb793ead099942273);
    assert(Py_REFCNT(frame_3786e2609f3f34bcb793ead099942273) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_recursive);
        tmp_assattr_value_1 = par_recursive;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_stat);
        tmp_assattr_value_2 = par_stat;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_listdir);
        tmp_assattr_value_3 = par_listdir;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[39], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[41], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_3786e2609f3f34bcb793ead099942273->m_frame.f_lineno = 253;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_st == NULL);
        var_st = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_st);
        tmp_ass_subvalue_1 = var_st;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[40]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_ass_subscript_1 = par_path;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_path);
        tmp_ass_subvalue_2 = par_path;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[41]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_st);
        tmp_expression_value_3 = var_st;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 255;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_st);
            tmp_expression_value_4 = var_st;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_3786e2609f3f34bcb793ead099942273->m_frame.f_lineno = 257;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[44], tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 257;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 257;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 257;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooooo";
                    exception_lineno = 257;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 257;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_7;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_st;
            var_st = tmp_assign_source_8;
            Py_INCREF(var_st);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_st);
        tmp_expression_value_5 = var_st;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[42]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_st);
            tmp_expression_value_6 = var_st;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[43]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_9, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_9);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_p);
        tmp_ass_subvalue_3 = var_p;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[41]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_st);
        tmp_ass_subvalue_4 = var_st;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 260;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[40]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_p);
        tmp_ass_subscript_4 = var_p;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3786e2609f3f34bcb793ead099942273, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3786e2609f3f34bcb793ead099942273->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3786e2609f3f34bcb793ead099942273, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3786e2609f3f34bcb793ead099942273,
        type_description_1,
        par_self,
        par_path,
        par_recursive,
        par_stat,
        par_listdir,
        var_st,
        var_p,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_3786e2609f3f34bcb793ead099942273 == cache_frame_3786e2609f3f34bcb793ead099942273) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3786e2609f3f34bcb793ead099942273);
        cache_frame_3786e2609f3f34bcb793ead099942273 = NULL;
    }

    assertFrameObject(frame_3786e2609f3f34bcb793ead099942273);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_st);
    var_st = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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

    Py_XDECREF(var_st);
    var_st = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_listdir);
    Py_DECREF(par_listdir);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    CHECK_OBJECT(par_stat);
    Py_DECREF(par_stat);
    CHECK_OBJECT(par_listdir);
    Py_DECREF(par_listdir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__13_walk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_root = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_root;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_root);
    Py_DECREF(par_root);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_locals {
    PyObject *var_paths;
    PyObject *var_e;
    PyObject *var_entries;
    PyObject *var_p;
    PyObject *var_entry;
    PyObject *var_path;
    PyObject *var_st;
    PyObject *outline_0_var_entry;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
};
#endif

static PyObject *watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_locals *generator_heap = (struct watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_paths = NULL;
    generator_heap->var_e = NULL;
    generator_heap->var_entries = NULL;
    generator_heap->var_p = NULL;
    generator_heap->var_entry = NULL;
    generator_heap->var_path = NULL;
    generator_heap->var_st = NULL;
    generator_heap->outline_0_var_entry = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_7f927c8ef0a9e5a9305d19e9d2acaf5e, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[45]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_3;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 264;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_3;
            }
            assert(generator_heap->tmp_listcomp_1__$0 == NULL);
            generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(generator_heap->tmp_listcomp_1__contraction == NULL);
            generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_1 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 264;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = generator_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = generator_heap->outline_0_var_entry;
                generator_heap->outline_0_var_entry = tmp_assign_source_5;
                Py_INCREF(generator_heap->outline_0_var_entry);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[48]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }

            tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            CHECK_OBJECT(generator_heap->outline_0_var_entry);
            tmp_expression_value_4 = generator_heap->outline_0_var_entry;
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[49]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_value_2);

                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
            generator->m_frame->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 264;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_assign_source_1 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(generator_heap->outline_0_var_entry);
        generator_heap->outline_0_var_entry = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_entry);
        generator_heap->outline_0_var_entry = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 264;
        goto try_except_handler_2;
        outline_result_1:;
        assert(generator_heap->var_paths == NULL);
        generator_heap->var_paths = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_3 == NULL) {
        generator_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        generator_heap->exception_keeper_tb_3 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_3, generator->m_frame, generator_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_3, &generator_heap->exception_keeper_value_3, &generator_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_OSError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
        assert(generator_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        generator_heap->var_e = tmp_assign_source_6;
    }
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(generator_heap->var_e);
        tmp_expression_value_5 = generator_heap->var_e;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[50]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[51]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 270;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[52]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 270;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 270;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[53]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 270;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_6;
    goto branch_end_2;
    branch_no_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 273;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_6;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;

    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 263;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_5;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        assert(generator_heap->var_entries == NULL);
        generator_heap->var_entries = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_paths);
        tmp_iter_arg_2 = generator_heap->var_paths;
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 276;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_10;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_tuple_element_2 = generator_heap->var_p;
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_4;
            PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[45]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 278;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_2;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
            CHECK_OBJECT(generator_heap->var_p);
            tmp_args_element_value_4 = generator_heap->var_p;
            generator->m_frame->m_frame.f_lineno = 278;
            tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[38], tmp_args_element_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 278;
                generator_heap->type_description_1 = "ccooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_11, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_11);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        {
            PyObject *old = generator_heap->var_entry;
            generator_heap->var_entry = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        if (generator_heap->var_entries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_9 = generator_heap->var_entries;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[55]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_entry);
        tmp_args_element_value_5 = generator_heap->var_entry;
        generator->m_frame->m_frame.f_lineno = 279;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 279;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_10;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_entry);
        tmp_expression_value_10 = generator_heap->var_entry;
        Py_INCREF(tmp_expression_value_10);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_10;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 280;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_8;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_6 == NULL) {
        generator_heap->exception_keeper_tb_6 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_6);
    } else if (generator_heap->exception_keeper_lineno_6 != 0) {
        generator_heap->exception_keeper_tb_6 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_6, generator->m_frame, generator_heap->exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_6, &generator_heap->exception_keeper_value_6, &generator_heap->exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_OSError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto try_continue_handler_9;
    goto branch_end_3;
    branch_no_3:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 277;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_9;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_7;
    // try continue handler code:
    try_continue_handler_9:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

    goto loop_start_2;
    // End of try:
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 276;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[45]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[37]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        if (generator_heap->var_entries == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = generator_heap->var_entries;
        tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 285;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 285;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 285;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 285;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 285;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[15];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 285;
            goto try_except_handler_12;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_12:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_path;
            generator_heap->var_path = tmp_assign_source_17;
            Py_INCREF(generator_heap->var_path);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_st;
            generator_heap->var_st = tmp_assign_source_18;
            Py_INCREF(generator_heap->var_st);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        int tmp_truth_name_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(generator_heap->var_st);
        tmp_expression_value_12 = generator_heap->var_st;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[57]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        generator->m_frame->m_frame.f_lineno = 287;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_2);

            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[45]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 288;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(generator_heap->var_path);
        tmp_args_element_value_7 = generator_heap->var_path;
        generator->m_frame->m_frame.f_lineno = 288;
        tmp_iter_arg_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[44], tmp_args_element_value_7);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 288;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 288;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
            generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 288;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_assign_source_21 = generator_heap->tmp_for_loop_3__iter_value;
        {
            PyObject *old = generator_heap->var_entry;
            generator_heap->var_entry = tmp_assign_source_21;
            Py_INCREF(generator_heap->var_entry);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_13;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_entry);
        tmp_expression_value_13 = generator_heap->var_entry;
        Py_INCREF(tmp_expression_value_13);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_13;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 288;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_6:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    branch_no_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_12 == NULL) {
        generator_heap->exception_keeper_tb_12 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_12);
    } else if (generator_heap->exception_keeper_lineno_12 != 0) {
        generator_heap->exception_keeper_tb_12 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_12, generator->m_frame, generator_heap->exception_keeper_lineno_12);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_12, &generator_heap->exception_keeper_value_12, &generator_heap->exception_keeper_tb_12);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_PermissionError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 286;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
    branch_no_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 285;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    branch_no_4:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_paths,
            generator_heap->var_e,
            generator_heap->var_entries,
            generator_heap->var_p,
            generator_heap->var_entry,
            generator_heap->var_path,
            generator_heap->var_st
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_paths);
    generator_heap->var_paths = NULL;
    Py_XDECREF(generator_heap->var_entries);
    generator_heap->var_entries = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    Py_XDECREF(generator_heap->var_entry);
    generator_heap->var_entry = NULL;
    Py_XDECREF(generator_heap->var_path);
    generator_heap->var_path = NULL;
    Py_XDECREF(generator_heap->var_st);
    generator_heap->var_st = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(generator_heap->var_paths);
    Py_DECREF(generator_heap->var_paths);
    generator_heap->var_paths = NULL;
    Py_XDECREF(generator_heap->var_entries);
    generator_heap->var_entries = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    Py_XDECREF(generator_heap->var_entry);
    generator_heap->var_entry = NULL;
    Py_XDECREF(generator_heap->var_path);
    generator_heap->var_path = NULL;
    Py_XDECREF(generator_heap->var_st);
    generator_heap->var_st = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_context,
        module_watchdog$utils$dirsnapshot,
        mod_consts[44],
#if PYTHON_VERSION >= 0x350
        mod_consts[58],
#endif
        codeobj_7f927c8ef0a9e5a9305d19e9d2acaf5e,
        closure,
        2,
#if 1
        sizeof(struct watchdog$utils$dirsnapshot$$$function__13_walk$$$genobj__1_walk_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__14_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f48d26c3de7ca303e0b06d1b5f51bfd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8)) {
        Py_XDECREF(cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8 = MAKE_FUNCTION_FRAME(tstate, codeobj_f48d26c3de7ca303e0b06d1b5f51bfd8, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8->m_type_description == NULL);
    frame_f48d26c3de7ca303e0b06d1b5f51bfd8 = cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f48d26c3de7ca303e0b06d1b5f51bfd8);
    assert(Py_REFCNT(frame_f48d26c3de7ca303e0b06d1b5f51bfd8) == 2);

    // Framed code:
    {
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[59]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f48d26c3de7ca303e0b06d1b5f51bfd8->m_frame.f_lineno = 298;
        tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_set_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
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
        exception_tb = MAKE_TRACEBACK(frame_f48d26c3de7ca303e0b06d1b5f51bfd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f48d26c3de7ca303e0b06d1b5f51bfd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f48d26c3de7ca303e0b06d1b5f51bfd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f48d26c3de7ca303e0b06d1b5f51bfd8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f48d26c3de7ca303e0b06d1b5f51bfd8 == cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8);
        cache_frame_f48d26c3de7ca303e0b06d1b5f51bfd8 = NULL;
    }

    assertFrameObject(frame_f48d26c3de7ca303e0b06d1b5f51bfd8);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__15_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    struct Nuitka_FrameObject *frame_24e501c2a75661627c543d549d77ebec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24e501c2a75661627c543d549d77ebec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24e501c2a75661627c543d549d77ebec)) {
        Py_XDECREF(cache_frame_24e501c2a75661627c543d549d77ebec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24e501c2a75661627c543d549d77ebec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24e501c2a75661627c543d549d77ebec = MAKE_FUNCTION_FRAME(tstate, codeobj_24e501c2a75661627c543d549d77ebec, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24e501c2a75661627c543d549d77ebec->m_type_description == NULL);
    frame_24e501c2a75661627c543d549d77ebec = cache_frame_24e501c2a75661627c543d549d77ebec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_24e501c2a75661627c543d549d77ebec);
    assert(Py_REFCNT(frame_24e501c2a75661627c543d549d77ebec) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[41]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id);
        tmp_args_element_value_1 = par_id;
        frame_24e501c2a75661627c543d549d77ebec->m_frame.f_lineno = 304;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
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
        exception_tb = MAKE_TRACEBACK(frame_24e501c2a75661627c543d549d77ebec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24e501c2a75661627c543d549d77ebec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24e501c2a75661627c543d549d77ebec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24e501c2a75661627c543d549d77ebec,
        type_description_1,
        par_self,
        par_id
    );


    // Release cached frame if used for exception.
    if (frame_24e501c2a75661627c543d549d77ebec == cache_frame_24e501c2a75661627c543d549d77ebec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24e501c2a75661627c543d549d77ebec);
        cache_frame_24e501c2a75661627c543d549d77ebec = NULL;
    }

    assertFrameObject(frame_24e501c2a75661627c543d549d77ebec);

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
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__16_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_st = NULL;
    struct Nuitka_FrameObject *frame_4437baf176e5fa3c41dd1de6bae81d7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4437baf176e5fa3c41dd1de6bae81d7b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4437baf176e5fa3c41dd1de6bae81d7b)) {
        Py_XDECREF(cache_frame_4437baf176e5fa3c41dd1de6bae81d7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4437baf176e5fa3c41dd1de6bae81d7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4437baf176e5fa3c41dd1de6bae81d7b = MAKE_FUNCTION_FRAME(tstate, codeobj_4437baf176e5fa3c41dd1de6bae81d7b, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4437baf176e5fa3c41dd1de6bae81d7b->m_type_description == NULL);
    frame_4437baf176e5fa3c41dd1de6bae81d7b = cache_frame_4437baf176e5fa3c41dd1de6bae81d7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4437baf176e5fa3c41dd1de6bae81d7b);
    assert(Py_REFCNT(frame_4437baf176e5fa3c41dd1de6bae81d7b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_subscript_value_1 = par_path;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_st == NULL);
        var_st = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_st);
        tmp_expression_value_3 = var_st;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_st);
            tmp_expression_value_4 = var_st;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_4437baf176e5fa3c41dd1de6bae81d7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4437baf176e5fa3c41dd1de6bae81d7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4437baf176e5fa3c41dd1de6bae81d7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4437baf176e5fa3c41dd1de6bae81d7b,
        type_description_1,
        par_self,
        par_path,
        var_st
    );


    // Release cached frame if used for exception.
    if (frame_4437baf176e5fa3c41dd1de6bae81d7b == cache_frame_4437baf176e5fa3c41dd1de6bae81d7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4437baf176e5fa3c41dd1de6bae81d7b);
        cache_frame_4437baf176e5fa3c41dd1de6bae81d7b = NULL;
    }

    assertFrameObject(frame_4437baf176e5fa3c41dd1de6bae81d7b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_st);
    Py_DECREF(var_st);
    var_st = NULL;
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

    Py_XDECREF(var_st);
    var_st = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__17_isdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_0081ff2eda39bc475eb165a97b8f4216;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0081ff2eda39bc475eb165a97b8f4216 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0081ff2eda39bc475eb165a97b8f4216)) {
        Py_XDECREF(cache_frame_0081ff2eda39bc475eb165a97b8f4216);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0081ff2eda39bc475eb165a97b8f4216 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0081ff2eda39bc475eb165a97b8f4216 = MAKE_FUNCTION_FRAME(tstate, codeobj_0081ff2eda39bc475eb165a97b8f4216, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0081ff2eda39bc475eb165a97b8f4216->m_type_description == NULL);
    frame_0081ff2eda39bc475eb165a97b8f4216 = cache_frame_0081ff2eda39bc475eb165a97b8f4216;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0081ff2eda39bc475eb165a97b8f4216);
    assert(Py_REFCNT(frame_0081ff2eda39bc475eb165a97b8f4216) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_subscript_value_1 = par_path;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0081ff2eda39bc475eb165a97b8f4216->m_frame.f_lineno = 312;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_0081ff2eda39bc475eb165a97b8f4216, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0081ff2eda39bc475eb165a97b8f4216->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0081ff2eda39bc475eb165a97b8f4216, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0081ff2eda39bc475eb165a97b8f4216,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_0081ff2eda39bc475eb165a97b8f4216 == cache_frame_0081ff2eda39bc475eb165a97b8f4216) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0081ff2eda39bc475eb165a97b8f4216);
        cache_frame_0081ff2eda39bc475eb165a97b8f4216 = NULL;
    }

    assertFrameObject(frame_0081ff2eda39bc475eb165a97b8f4216);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__18_mtime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_42fcbd83c2d862d59c287dabfe620959;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42fcbd83c2d862d59c287dabfe620959 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42fcbd83c2d862d59c287dabfe620959)) {
        Py_XDECREF(cache_frame_42fcbd83c2d862d59c287dabfe620959);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42fcbd83c2d862d59c287dabfe620959 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42fcbd83c2d862d59c287dabfe620959 = MAKE_FUNCTION_FRAME(tstate, codeobj_42fcbd83c2d862d59c287dabfe620959, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42fcbd83c2d862d59c287dabfe620959->m_type_description == NULL);
    frame_42fcbd83c2d862d59c287dabfe620959 = cache_frame_42fcbd83c2d862d59c287dabfe620959;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_42fcbd83c2d862d59c287dabfe620959);
    assert(Py_REFCNT(frame_42fcbd83c2d862d59c287dabfe620959) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_subscript_value_1 = par_path;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[64]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_42fcbd83c2d862d59c287dabfe620959, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42fcbd83c2d862d59c287dabfe620959->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42fcbd83c2d862d59c287dabfe620959, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42fcbd83c2d862d59c287dabfe620959,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_42fcbd83c2d862d59c287dabfe620959 == cache_frame_42fcbd83c2d862d59c287dabfe620959) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42fcbd83c2d862d59c287dabfe620959);
        cache_frame_42fcbd83c2d862d59c287dabfe620959 = NULL;
    }

    assertFrameObject(frame_42fcbd83c2d862d59c287dabfe620959);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__19_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_e02603da51d17d2e80f41a55d1be0bf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e02603da51d17d2e80f41a55d1be0bf7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e02603da51d17d2e80f41a55d1be0bf7)) {
        Py_XDECREF(cache_frame_e02603da51d17d2e80f41a55d1be0bf7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e02603da51d17d2e80f41a55d1be0bf7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e02603da51d17d2e80f41a55d1be0bf7 = MAKE_FUNCTION_FRAME(tstate, codeobj_e02603da51d17d2e80f41a55d1be0bf7, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e02603da51d17d2e80f41a55d1be0bf7->m_type_description == NULL);
    frame_e02603da51d17d2e80f41a55d1be0bf7 = cache_frame_e02603da51d17d2e80f41a55d1be0bf7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e02603da51d17d2e80f41a55d1be0bf7);
    assert(Py_REFCNT(frame_e02603da51d17d2e80f41a55d1be0bf7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_subscript_value_1 = par_path;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[65]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_e02603da51d17d2e80f41a55d1be0bf7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e02603da51d17d2e80f41a55d1be0bf7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e02603da51d17d2e80f41a55d1be0bf7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e02603da51d17d2e80f41a55d1be0bf7,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_e02603da51d17d2e80f41a55d1be0bf7 == cache_frame_e02603da51d17d2e80f41a55d1be0bf7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e02603da51d17d2e80f41a55d1be0bf7);
        cache_frame_e02603da51d17d2e80f41a55d1be0bf7 = NULL;
    }

    assertFrameObject(frame_e02603da51d17d2e80f41a55d1be0bf7);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__20_stat_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_6e923bc91baa8eb3e98eb8e0218162e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e923bc91baa8eb3e98eb8e0218162e2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e923bc91baa8eb3e98eb8e0218162e2)) {
        Py_XDECREF(cache_frame_6e923bc91baa8eb3e98eb8e0218162e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e923bc91baa8eb3e98eb8e0218162e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e923bc91baa8eb3e98eb8e0218162e2 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e923bc91baa8eb3e98eb8e0218162e2, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e923bc91baa8eb3e98eb8e0218162e2->m_type_description == NULL);
    frame_6e923bc91baa8eb3e98eb8e0218162e2 = cache_frame_6e923bc91baa8eb3e98eb8e0218162e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e923bc91baa8eb3e98eb8e0218162e2);
    assert(Py_REFCNT(frame_6e923bc91baa8eb3e98eb8e0218162e2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_subscript_value_1 = par_path;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_6e923bc91baa8eb3e98eb8e0218162e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e923bc91baa8eb3e98eb8e0218162e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e923bc91baa8eb3e98eb8e0218162e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e923bc91baa8eb3e98eb8e0218162e2,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_6e923bc91baa8eb3e98eb8e0218162e2 == cache_frame_6e923bc91baa8eb3e98eb8e0218162e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e923bc91baa8eb3e98eb8e0218162e2);
        cache_frame_6e923bc91baa8eb3e98eb8e0218162e2 = NULL;
    }

    assertFrameObject(frame_6e923bc91baa8eb3e98eb8e0218162e2);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__21___sub__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_previous_dirsnap = python_pars[1];
    struct Nuitka_FrameObject *frame_52ac0f6bccdb4920aa41dfab802e6973;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_52ac0f6bccdb4920aa41dfab802e6973 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52ac0f6bccdb4920aa41dfab802e6973)) {
        Py_XDECREF(cache_frame_52ac0f6bccdb4920aa41dfab802e6973);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52ac0f6bccdb4920aa41dfab802e6973 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52ac0f6bccdb4920aa41dfab802e6973 = MAKE_FUNCTION_FRAME(tstate, codeobj_52ac0f6bccdb4920aa41dfab802e6973, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52ac0f6bccdb4920aa41dfab802e6973->m_type_description == NULL);
    frame_52ac0f6bccdb4920aa41dfab802e6973 = cache_frame_52ac0f6bccdb4920aa41dfab802e6973;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_52ac0f6bccdb4920aa41dfab802e6973);
    assert(Py_REFCNT(frame_52ac0f6bccdb4920aa41dfab802e6973) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_previous_dirsnap);
        tmp_args_element_value_1 = par_previous_dirsnap;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_52ac0f6bccdb4920aa41dfab802e6973->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
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
        exception_tb = MAKE_TRACEBACK(frame_52ac0f6bccdb4920aa41dfab802e6973, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52ac0f6bccdb4920aa41dfab802e6973->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52ac0f6bccdb4920aa41dfab802e6973, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52ac0f6bccdb4920aa41dfab802e6973,
        type_description_1,
        par_self,
        par_previous_dirsnap
    );


    // Release cached frame if used for exception.
    if (frame_52ac0f6bccdb4920aa41dfab802e6973 == cache_frame_52ac0f6bccdb4920aa41dfab802e6973) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52ac0f6bccdb4920aa41dfab802e6973);
        cache_frame_52ac0f6bccdb4920aa41dfab802e6973 = NULL;
    }

    assertFrameObject(frame_52ac0f6bccdb4920aa41dfab802e6973);

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
    CHECK_OBJECT(par_previous_dirsnap);
    Py_DECREF(par_previous_dirsnap);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_previous_dirsnap);
    Py_DECREF(par_previous_dirsnap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__22___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b1d9f5b9c208d5e845531cb56288f693;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1d9f5b9c208d5e845531cb56288f693 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1d9f5b9c208d5e845531cb56288f693)) {
        Py_XDECREF(cache_frame_b1d9f5b9c208d5e845531cb56288f693);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1d9f5b9c208d5e845531cb56288f693 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1d9f5b9c208d5e845531cb56288f693 = MAKE_FUNCTION_FRAME(tstate, codeobj_b1d9f5b9c208d5e845531cb56288f693, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1d9f5b9c208d5e845531cb56288f693->m_type_description == NULL);
    frame_b1d9f5b9c208d5e845531cb56288f693 = cache_frame_b1d9f5b9c208d5e845531cb56288f693;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b1d9f5b9c208d5e845531cb56288f693);
    assert(Py_REFCNT(frame_b1d9f5b9c208d5e845531cb56288f693) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b1d9f5b9c208d5e845531cb56288f693->m_frame.f_lineno = 345;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
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
        exception_tb = MAKE_TRACEBACK(frame_b1d9f5b9c208d5e845531cb56288f693, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1d9f5b9c208d5e845531cb56288f693->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1d9f5b9c208d5e845531cb56288f693, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1d9f5b9c208d5e845531cb56288f693,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b1d9f5b9c208d5e845531cb56288f693 == cache_frame_b1d9f5b9c208d5e845531cb56288f693) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1d9f5b9c208d5e845531cb56288f693);
        cache_frame_b1d9f5b9c208d5e845531cb56288f693 = NULL;
    }

    assertFrameObject(frame_b1d9f5b9c208d5e845531cb56288f693);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__23___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_87f21a988b7a09d8c2aaeb73b4932534;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87f21a988b7a09d8c2aaeb73b4932534 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87f21a988b7a09d8c2aaeb73b4932534)) {
        Py_XDECREF(cache_frame_87f21a988b7a09d8c2aaeb73b4932534);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87f21a988b7a09d8c2aaeb73b4932534 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87f21a988b7a09d8c2aaeb73b4932534 = MAKE_FUNCTION_FRAME(tstate, codeobj_87f21a988b7a09d8c2aaeb73b4932534, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87f21a988b7a09d8c2aaeb73b4932534->m_type_description == NULL);
    frame_87f21a988b7a09d8c2aaeb73b4932534 = cache_frame_87f21a988b7a09d8c2aaeb73b4932534;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_87f21a988b7a09d8c2aaeb73b4932534);
    assert(Py_REFCNT(frame_87f21a988b7a09d8c2aaeb73b4932534) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[40]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
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
        exception_tb = MAKE_TRACEBACK(frame_87f21a988b7a09d8c2aaeb73b4932534, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87f21a988b7a09d8c2aaeb73b4932534->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87f21a988b7a09d8c2aaeb73b4932534, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87f21a988b7a09d8c2aaeb73b4932534,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_87f21a988b7a09d8c2aaeb73b4932534 == cache_frame_87f21a988b7a09d8c2aaeb73b4932534) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87f21a988b7a09d8c2aaeb73b4932534);
        cache_frame_87f21a988b7a09d8c2aaeb73b4932534 = NULL;
    }

    assertFrameObject(frame_87f21a988b7a09d8c2aaeb73b4932534);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__25_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = PySet_New(NULL);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_7b3c86c89aadb6329654451a2d55afd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_5848e2d746185252866beefb694407b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__12___init__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_3786e2609f3f34bcb793ead099942273,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13_walk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__13_walk,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_7f927c8ef0a9e5a9305d19e9d2acaf5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14_paths() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__14_paths,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_f48d26c3de7ca303e0b06d1b5f51bfd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__15_path,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_24e501c2a75661627c543d549d77ebec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16_inode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__16_inode,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_4437baf176e5fa3c41dd1de6bae81d7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_isdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__17_isdir,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_0081ff2eda39bc475eb165a97b8f4216,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_mtime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__18_mtime,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_42fcbd83c2d862d59c287dabfe620959,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__19_size,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_e02603da51d17d2e80f41a55d1be0bf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_e6d093210f069df6d184db52fd595a33,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[2],
#endif
        codeobj_c1da0858d8186debac750c4e79eff69f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[2],
#endif
        codeobj_596797b4989a3ee76632c5300a1630e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_stat_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__20_stat_info,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_6e923bc91baa8eb3e98eb8e0218162e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21___sub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__21___sub__,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_52ac0f6bccdb4920aa41dfab802e6973,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__22___str__,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_b1d9f5b9c208d5e845531cb56288f693,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__23___repr__,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_87f21a988b7a09d8c2aaeb73b4932534,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_dabc63b7ab8110383dd3539624ee8aac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25_paths() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__25_paths,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_e0c52e49e27118e63b5bfeccc8c95b93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__2___str__,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_5173ada78e69cab5eecf09187ce3d33c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__3___repr__,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_6f7ce18dcc11f874854f29aba0fbae2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__4_files_created,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_172c343f79159b8f26ec8fc54ef1c13b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4aeb8f6cbed236a62c181fb37c9965f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__6_files_modified,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_3e1bef50af961d539ce59ba8bf6abffd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__7_files_moved,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_1a3078494ac079c343965275500e7cb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_7d7af83c71dc1c601f418950dd343b6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_9e444ffbeb43fe4bf5e41e82e24eb366,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts[34],
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

function_impl_code functable_watchdog$utils$dirsnapshot[] = {
    impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode,
    impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode,
    impl_watchdog$utils$dirsnapshot$$$function__1___init__,
    impl_watchdog$utils$dirsnapshot$$$function__2___str__,
    impl_watchdog$utils$dirsnapshot$$$function__3___repr__,
    impl_watchdog$utils$dirsnapshot$$$function__4_files_created,
    impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted,
    impl_watchdog$utils$dirsnapshot$$$function__6_files_modified,
    impl_watchdog$utils$dirsnapshot$$$function__7_files_moved,
    impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified,
    impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved,
    impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted,
    impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created,
    impl_watchdog$utils$dirsnapshot$$$function__12___init__,
    impl_watchdog$utils$dirsnapshot$$$function__13_walk,
    impl_watchdog$utils$dirsnapshot$$$function__14_paths,
    impl_watchdog$utils$dirsnapshot$$$function__15_path,
    impl_watchdog$utils$dirsnapshot$$$function__16_inode,
    impl_watchdog$utils$dirsnapshot$$$function__17_isdir,
    impl_watchdog$utils$dirsnapshot$$$function__18_mtime,
    impl_watchdog$utils$dirsnapshot$$$function__19_size,
    impl_watchdog$utils$dirsnapshot$$$function__20_stat_info,
    impl_watchdog$utils$dirsnapshot$$$function__21___sub__,
    impl_watchdog$utils$dirsnapshot$$$function__22___str__,
    impl_watchdog$utils$dirsnapshot$$$function__23___repr__,
    NULL,
    impl_watchdog$utils$dirsnapshot$$$function__25_paths,
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

    function_impl_code *current = functable_watchdog$utils$dirsnapshot;
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

    if (offset > sizeof(functable_watchdog$utils$dirsnapshot) || offset < 0) {
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
        functable_watchdog$utils$dirsnapshot[offset],
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
        module_watchdog$utils$dirsnapshot,
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
PyObject *modulecode_watchdog$utils$dirsnapshot(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog.utils.dirsnapshot");

    // Store the module for future use.
    module_watchdog$utils$dirsnapshot = module;

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
        PRINT_STRING("watchdog.utils.dirsnapshot: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog.utils.dirsnapshot: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwatchdog$utils$dirsnapshot\n");

    moduledict_watchdog$utils$dirsnapshot = MODULE_DICT(module_watchdog$utils$dirsnapshot);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$utils$dirsnapshot,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$dirsnapshot,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[141]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$dirsnapshot,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$dirsnapshot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$dirsnapshot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$utils$dirsnapshot);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$utils$dirsnapshot);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_471dd1f553037de085cf587647dfb828;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_d57e9d3412086de667ca8fbc7339a9b7_2;
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
    PyObject *locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222 = NULL;
    struct Nuitka_FrameObject *frame_d24651676217d1d8b1e5591731edd290_3;
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
    PyObject *locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351 = NULL;
    struct Nuitka_FrameObject *frame_2429288031b0367d9ec0156c97b4e1a1_4;
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
        tmp_assign_source_1 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    frame_471dd1f553037de085cf587647dfb828 = MAKE_MODULE_FRAME(codeobj_471dd1f553037de085cf587647dfb828, module_watchdog$utils$dirsnapshot);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_471dd1f553037de085cf587647dfb828);
    assert(Py_REFCNT(frame_471dd1f553037de085cf587647dfb828) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[73]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[73]);

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
        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[77]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[50];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$utils$dirsnapshot;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[25];
        frame_471dd1f553037de085cf587647dfb828->m_frame.f_lineno = 51;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_watchdog$utils$dirsnapshot;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[78];
        tmp_level_value_2 = mod_consts[25];
        frame_471dd1f553037de085cf587647dfb828->m_frame.f_lineno = 53;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_watchdog$utils$dirsnapshot,
                mod_consts[56],
                mod_consts[25]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[82], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[83];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_d57e9d3412086de667ca8fbc7339a9b7_2 = MAKE_CLASS_FRAME(tstate, codeobj_d57e9d3412086de667ca8fbc7339a9b7, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d57e9d3412086de667ca8fbc7339a9b7_2);
        assert(Py_REFCNT(frame_d57e9d3412086de667ca8fbc7339a9b7_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 165;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 197;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created();

            frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d57e9d3412086de667ca8fbc7339a9b7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d57e9d3412086de667ca8fbc7339a9b7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d57e9d3412086de667ca8fbc7339a9b7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d57e9d3412086de667ca8fbc7339a9b7_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d57e9d3412086de667ca8fbc7339a9b7_2);

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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[67];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_471dd1f553037de085cf587647dfb828->m_frame.f_lineno = 56;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56);
        locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56 = NULL;
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

        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56);
        locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_56 = NULL;
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
        exception_lineno = 56;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_10);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[82], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_d24651676217d1d8b1e5591731edd290_3 = MAKE_CLASS_FRAME(tstate, codeobj_d24651676217d1d8b1e5591731edd290, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d24651676217d1d8b1e5591731edd290_3);
        assert(Py_REFCNT(frame_d24651676217d1d8b1e5591731edd290_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = Py_True;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_1;
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
                tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[47]);

                if (unlikely(tmp_expression_value_1 == NULL)) {
                    tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
                }

                assert(!(tmp_expression_value_1 == NULL));
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_2);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[47]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
                }

                assert(!(tmp_expression_value_2 == NULL));
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[108]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13_walk();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_9 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14_paths();

            frame_d24651676217d1d8b1e5591731edd290_3->m_frame.f_lineno = 293;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d24651676217d1d8b1e5591731edd290_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d24651676217d1d8b1e5591731edd290_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d24651676217d1d8b1e5591731edd290_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d24651676217d1d8b1e5591731edd290_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_d24651676217d1d8b1e5591731edd290_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_path();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[9], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16_inode();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[8], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_isdir();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_mtime();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_size();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_stat_info();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21___sub__();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22___str__();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23___repr__();

        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_11 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[107];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_471dd1f553037de085cf587647dfb828->m_frame.f_lineno = 222;
            tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_14 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222);
        locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222 = NULL;
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

        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222);
        locals_watchdog$utils$dirsnapshot$$$class__2_DirectorySnapshot_222 = NULL;
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
        exception_lineno = 222;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_14);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351, mod_consts[82], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_staticmethod_arg_1;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_path();

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_2429288031b0367d9ec0156c97b4e1a1_4 = MAKE_CLASS_FRAME(tstate, codeobj_2429288031b0367d9ec0156c97b4e1a1, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2429288031b0367d9ec0156c97b4e1a1_4);
        assert(Py_REFCNT(frame_2429288031b0367d9ec0156c97b4e1a1_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_10;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25_paths();

            frame_2429288031b0367d9ec0156c97b4e1a1_4->m_frame.f_lineno = 367;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2429288031b0367d9ec0156c97b4e1a1_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2429288031b0367d9ec0156c97b4e1a1_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2429288031b0367d9ec0156c97b4e1a1_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2429288031b0367d9ec0156c97b4e1a1_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_2429288031b0367d9ec0156c97b4e1a1_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_13 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[123];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_471dd1f553037de085cf587647dfb828->m_frame.f_lineno = 351;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_18 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351);
        locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351 = NULL;
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

        Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351);
        locals_watchdog$utils$dirsnapshot$$$class__3_EmptyDirectorySnapshot_351 = NULL;
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
        exception_lineno = 351;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_18);
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
        exception_tb = MAKE_TRACEBACK(frame_471dd1f553037de085cf587647dfb828, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_471dd1f553037de085cf587647dfb828->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_471dd1f553037de085cf587647dfb828, exception_lineno);
    }



    assertFrameObject(frame_471dd1f553037de085cf587647dfb828);

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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog.utils.dirsnapshot", false);

    Py_INCREF(module_watchdog$utils$dirsnapshot);
    return module_watchdog$utils$dirsnapshot;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$utils$dirsnapshot", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
