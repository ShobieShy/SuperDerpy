/*! \file moonwalk.h
 *  \brief Moonwalk Level module headers.
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
#include "../../timeline.h"

bool DoMoonwalk(struct Game *game, struct TM_Action *action, enum TM_ActionState state);
void Moonwalk_Draw(struct Game *game);
void Moonwalk_Logic(struct Game *game);
void Moonwalk_Start(struct Game *game);
void Moonwalk_Stop(struct Game *game);
void Moonwalk_Unload(struct Game *game);
void Moonwalk_Load(struct Game *game);
void Moonwalk_UnloadBitmaps(struct Game *game);
void Moonwalk_LoadBitmaps(struct Game *game, void (*progress)(struct Game*, float));
void Moonwalk_ProcessEvent(struct Game *game, ALLEGRO_EVENT *ev);
void Moonwalk_Resume(struct Game *game);
void Moonwalk_Pause(struct Game *game);
