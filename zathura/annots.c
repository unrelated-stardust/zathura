/* SPDX-License-Identifier: Zlib */

#include "annots.h"

struct zathura_annot_s {
  zathura_rectangle_t position;  /**< Position of the annotation */
  zathura_annot_type_t type;     /**< Annotation type */

  const char* author;
  const char* content;
};

zathura_annot_t* zathura_annot_new(zathura_annot_type_t type, zathura_rectangle_t position, const char* author, const char* content) {
  zathura_annot_t* annot = g_try_malloc0(sizeof(zathura_annot_t));
  if (annot == NULL) {
    return NULL;
  }

  annot->position = position;
  annot->type     = type;
  annot->author   = author;
  annot->content  = content;

  return annot;
}

void zathura_annot_free(zathura_annot_t* annot) {
  if (annot == NULL) {
    return;
  }

  g_free(annot);
}
