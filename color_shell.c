/*
 * This file is part of color_shell.
 * Copyright (C) 2014, Pr3acher
 * All rights reserved.
 *
 * color_shell is a free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * color_shell is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with color_shell.  If not, see <http://www.gnu.org/licenses/>. 
 */

#include <stdarg.h>
#include <stdio.h>
#include "color_shell.h"

#if defined(_WIN32)
void set_color(int color)
{
  if(!out)
    out = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | color);
}

#elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__)) || defined(__unix__)
void set_color(char *color)
{
  printf(color);
}

#else
#error Platform not supported by color_shell lib
#endif /* _WIN32 */

void w_red(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(RED);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_green(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(GREEN);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_white(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(WHITE);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_blue(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(BLUE);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_purple(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(PURPLE);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_yellow(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(YELLOW);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_cyan(char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  set_color(CYAN);
  vprintf(fmt, ap);
  va_end(ap);
  set_color(REWIND);
}

void w_rewind(void)
{
  set_color(REWIND);
}
