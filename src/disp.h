/***************************************************************************
 *            disp.h
 *
 *  Sat Dec  4 17:18:14 2010
 *  Copyright  2010  Paul Childs
 *  <pchilds@physics.org>
 ****************************************************************************/

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */

#ifndef __DISP_H__
#	define __DISP_H__
#	include "main.h"
	extern GArray *r1, *g1, *b1, *a1, *r2, *g2, *b2, *a2;
	extern GtkWidget *nbk, *pt1, *pt2;
	void dpa(GtkWidget*, gpointer);
	void dpr(GtkWidget*, gpointer);
	void upc(GtkWidget*, gpointer);
#endif
