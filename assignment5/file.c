#include "file.h"
#include <string.h>

int read_int(FILE *fp) {
    char line[256];
    fgets(line, sizeof(line), fp);

    int value = 0;
    sscanf(line, "%d", &value);
    return value;
}

Color read_color(FILE *fp) {
    char line[256];
    fgets(line, sizeof(line), fp);

    if (strncmp(line, "RED", 3) == 0) return RED;
    if (strncmp(line, "BLUE", 4) == 0) return BLUE;
    if (strncmp(line, "GREEN", 5) == 0) return GREEN;
    if (strncmp(line, "YELLOW", 6) == 0) return YELLOW;
    if (strncmp(line, "BROWN", 5) == 0) return BROWN;

    return WHITE; // fallback
}

Vector2 read_vector(FILE *fp) {
    char line[256];
    fgets(line, sizeof(line), fp);

    Vector2 v = {0};
    sscanf(line, "%f,%f", &v.x, &v.y);
    return v;
}