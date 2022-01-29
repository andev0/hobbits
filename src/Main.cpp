#include "Engine/GraphicsObjects/Rectangle.h"

int main()
{
    const Vector2 screenSize {360, 640};

    InitWindow(screenSize.x, screenSize.y, "Hobbits");

    hbt::Rectangle rect(nullptr, {0, 0}, screenSize, DARKGRAY);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        {
            rect.draw();
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
