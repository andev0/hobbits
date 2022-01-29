#ifndef HBT_RECTANGLE_H
#define HBT_RECTANGLE_H

#include "Engine/GraphicsObject.h"

namespace hbt
{
    class Rectangle : public GraphicsObject
    {
    public:
        Rectangle(GraphicsObject* parent = nullptr, 
                  Vector2 position = {0, 0},
                  Vector2 size = {0, 0},
                  Color color = BLACK)
            : GraphicsObject(parent, position, size, color) {}

        virtual void draw() const override;
    };
}

#endif //HBT_RECTANGLE_H
