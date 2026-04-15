#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include "raylib.h"

int read_int(FILE *fp);
Color read_color(FILE *fp);
Vector2 read_vector(FILE *fp);

#endif