/*
 * Copyright © 2016 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Carlos Garnacho <carlosg@gnome.org>
 */

#ifndef _CC_DRAWING_AREA_H
#define _CC_DRAWING_AREA_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define CC_TYPE_DRAWING_AREA cc_drawing_area_get_type()

G_DECLARE_FINAL_TYPE (CcDrawingArea, cc_drawing_area, CC, DRAWING_AREA, GtkEventBox)

GType      cc_drawing_area_get_type (void) G_GNUC_CONST;

GtkWidget *cc_drawing_area_new      (void);

G_END_DECLS

#endif /* _CC_DRAWING_AREA_H */