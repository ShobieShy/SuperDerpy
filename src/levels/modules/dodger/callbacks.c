/*! \file callbacks.c
 *  \brief Obstacle callbacks for Dodger Level module.
 */
/*
 * Copyright (c) Sebastian Krzyszkowiak <dos@dosowisko.net>
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <math.h>
#include "callbacks.h"

void Obst_MoveUpDown(struct Game *game, struct Obstacle *obstacle) {
	if (*((bool*)obstacle->data)) {
		obstacle->y -= 0.5;
		if (obstacle->y<=0) {
			*((bool*)obstacle->data)=false;
		}
	} else {
		obstacle->y += 0.5;
		if (obstacle->y>=((game->viewport.height-al_get_bitmap_height(*(obstacle->bitmap))/obstacle->rows)/(float)game->viewport.height)*100) {
			*((bool*)obstacle->data)=true;
		}
	}
}

void Obst_MoveUp(struct Game *game, struct Obstacle *obstacle) {
	float* a = (float*)obstacle->data;
	obstacle->y -= *a;
}

void Obst_RotateSin(struct Game *game, struct Obstacle *obstacle) {
	float* a = (float*)obstacle->data;
	/*PrintConsole(game, "%p - %f", obstacle, obstacle->y);*/
	obstacle->angle = sin(*a)/2.0;
	*a+=4.5/60.0;
}

void Obst_MoveSin(struct Game *game, struct Obstacle *obstacle) {
	float* a = (float*)obstacle->data;
	/*PrintConsole(game, "%p - %f", obstacle, obstacle->y);*/
	obstacle->y -= sin(*a)*4;
	*a+=4.5/60.0;
	obstacle->y += sin(*a)*4;
}
