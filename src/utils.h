/*! \file allegro_utils.h
 *  \brief Headers of helper functions for Allegro.
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
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include "main.h"

/*! \brief Draws rectangle filled with vertical gradient. */
void DrawVerticalGradientRect(float x, float y, float w, float h, ALLEGRO_COLOR top, ALLEGRO_COLOR bottom);
/*! \brief Draws rectangle filled with horizontal gradient. */
void DrawHorizontalGradientRect(float x, float y, float w, float h, ALLEGRO_COLOR left, ALLEGRO_COLOR right);
/*! \brief Draws text with shadow.
 *
 * Draws given text two times: once with color (0,0,0,128) and 1px off in both x and y axis,
 * and second time with actual given color and position.
 */
void DrawTextWithShadow(ALLEGRO_FONT *font, ALLEGRO_COLOR color, float x, float y, int flags, char const *text);

/*! \brief Loads bitmap into memory and scales it with software linear filtering. */
ALLEGRO_BITMAP* LoadScaledBitmap(struct Game *game, char* filename, int width, int height);

/*! \brief Displays fade in or fade out animation on current gamestate. */
void FadeGameState(struct Game *game, bool in);

/*! \brief Finds path for data file. */
char* GetDataFilePath(char* filename);

/*! \brief Print some message on game console.
 *
 * Draws message on console bitmap, so it'll be displayed when calling DrawConsole.
 * If game->debug is true, then it also prints given message on stdout.
 * It needs to be called in printf style.
 */
void PrintConsole(struct Game *game, char* format, ...);
