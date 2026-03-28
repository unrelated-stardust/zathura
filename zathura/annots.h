/* SPDX-License-Identifier: Zlib */

#ifndef ANNOT_H
#define ANNOT_H

#include "types.h"

/**
 * Creates a new zathura annotation
 *
 * @param type Type of the annotation
 * @param position Position of the annotation
 * @param author Author of the annotation
 * @param content Content of the annotation
 * @return New zathura annotation
 */
ZATHURA_PLUGIN_API zathura_annot_t* zathura_annot_new(zathura_annot_type_t type, zathura_rectangle_t position,
                                                    const char* author, const char* content);

/**
 * Free annotation
 *
 * @param annot The annotation
 */
ZATHURA_PLUGIN_API void zathura_annot_free(zathura_annot_t* annot);

/**
 * Display a annotation using girara_notify
 *
 * @param zathura Zathura instance
 * @param annot The annotation
 */
void zathura_annot_display(zathura_t* zathura, zathura_annot_t* annot);

#endif // ANNOT_H
