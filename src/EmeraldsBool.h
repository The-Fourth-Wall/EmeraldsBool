/**
 * A simplistic boolean data type.
 * Copyright (C) 2024 oblivious
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __EMERALDSBOOL_H_
#define __EMERALDSBOOL_H_

#include "../libs/EmeraldsPreprocessor/export/EmeraldsPreprocessor.h"

/** @param bool -> A 'big' enough size to hold both 1 and 0 **/
#if PREPROCESSOR_C_VERSION < 2023
  #define bool  unsigned char
  #define true  1
  #define false 0
#else
  #include <stdbool.h>
#endif

#endif
