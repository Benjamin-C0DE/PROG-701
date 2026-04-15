#include "raylib.h"
#include "loader.h"

int main() {
    InitWindow(800, 600, "Shape Viewer");

    Polygon *polygons = NULL;
    int count = load_polygons("shapes.txt", &polygons);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        for (int i = 0; i < count; i++) {
            DrawLineStrip(polygons[i].points, polygons[i].count, polygons[i].color);
        }

        EndDrawing();
    }

    free_polygons(polygons, count);
    CloseWindow();
    return 0;
}