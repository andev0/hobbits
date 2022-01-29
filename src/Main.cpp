#include <raylib.h>

int main()
{
    const Vector2 screenSize {360, 640};

    InitWindow(screenSize.x, screenSize.y, "Hobbits");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        {}

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
