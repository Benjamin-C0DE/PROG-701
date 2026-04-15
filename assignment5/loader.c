#include "loader.h"
#include <stdlib.h>

int load_polygons(const char *filename, Polygon **polys) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return 0;

    int count = read_int(fp);
    *polys = malloc(sizeof(Polygon) * count);

    for (int i = 0; i < count; i++) {
        (*polys)[i].color = read_color(fp);
        (*polys)[i].count = read_int(fp);

        (*polys)[i].points = malloc(sizeof(Vector2) * (*polys)[i].count);

        for (int j = 0; j < (*polys)[i].count; j++) {
            (*polys)[i].points[j] = read_vector(fp);
        }
    }

    fclose(fp);
    return count;
}

void free_polygon(Polygon *poly) {
    free(poly->points);
}

void free_polygons(Polygon *polys, int count) {
    for (int i = 0; i < count; i++) {
        free_polygon(&polys[i]);
    }
    free(polys);
}