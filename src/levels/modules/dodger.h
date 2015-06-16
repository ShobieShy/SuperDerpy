/*! \file dodger.h
 *  \brief Dodger Level module headers.
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
#include "../../main.h"

void Dodger_Draw(struct Game *game);
void Dodger_Logic(struct Game *game);
void Dodger_Preload(struct Game *game);
void Dodger_Unload(struct Game *game);
void Dodger_Load(struct Game *game);
void Dodger_Keydown(struct Game *game, ALLEGRO_EVENT *ev);
void Dodger_UnloadBitmaps(struct Game *game);
void Dodger_PreloadBitmaps(struct Game *game, void (*progress)(struct Game*, float));
void Dodger_ProcessEvent(struct Game *game, ALLEGRO_EVENT *ev);
void Dodger_Resume(struct Game *game);
void Dodger_Pause(struct Game *game);
int Dodger_PreloadSteps(void);
