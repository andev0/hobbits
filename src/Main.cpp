#include "Engenie/Graphics.h"

int main()
{
    const Vector2 screenSize {360, 640};

    InitWindow(screenSize.x, screenSize.y, "Hobbits");

    hbt::Rectangle rect(nullptr, {0, 0}, screenSize, DARKGRAY);
    hbt::Text text(&rect, {5, 5}, "Hello World!", 40.0f, RAYWHITE, "Resources/Fonts/Nunito/Regular.ttf");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        {
            rect.draw();
            text.draw();
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
