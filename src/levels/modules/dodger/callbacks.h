/*! \file callbacks.h
 *  \brief Headers with Obstacle callbacks for Dodger Level module.
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

#include "../dodger.h"
#include "../../../main.h"

/*! \brief Move up or down until reaching the edge of the screen. After that - change direction. */
void Obst_MoveUpDown(struct Game *game, struct Obstacle *obstacle);

/*! \brief Move up at constant speed. */
void Obst_MoveUp(struct Game *game, struct Obstacle *obstacle);

/*! \brief Move in sinusoidal way in Y-axis relative to position at beginning. */
void Obst_MoveSin(struct Game *game, struct Obstacle *obstacle);

/*! \brief Rotate in sinusoidal way. */
void Obst_RotateSin(struct Game *game, struct Obstacle *obstacle);
