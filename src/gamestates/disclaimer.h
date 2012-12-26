/*! \file disclaimer.h
 *  \brief Disclaimer about early release preview - headers.
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

void Gamestate_Draw(struct Game *game);
void Gamestate_Preload(struct Game *game, void (*progress)(struct Game*, float));
void Gamestate_Unload(struct Game *game);
void Gamestate_Load(struct Game *game);
int Gamestate_Keydown(struct Game *game, ALLEGRO_EVENT *ev);
