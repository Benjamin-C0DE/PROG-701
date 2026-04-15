#ifndef LOADER_H
#define LOADER_H

#include "raylib.h"
#include "file.h"

typedef struct {
    Color color;
    Vector2 *points;
    int count;
} Polygon;

int load_polygons(const char *filename, Polygon **polys);
void free_polygon(Polygon *poly);
void free_polygons(Polygon *polys, int count);

#endif