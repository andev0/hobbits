#ifndef HBT_GRAPHICSOBJECT_H
#define HBT_GRAPHICSOBJECT_H

#include <raylib.h>
#include <cstddef>

namespace hbt
{
    class GraphicsObject
    {
    public:
        GraphicsObject(GraphicsObject* parent = nullptr, 
                       Vector2 position = {0, 0},
                       Vector2 size = {0, 0},
                       Color backgroundColor = BLACK)
            : p_parent(parent)
            , m_position(position)
            , m_size(size)
            , m_backgroundColor(backgroundColor) {}

        virtual void draw() const = 0;

        Vector2 getPosition() const { return m_position; }
        Vector2 getSize() const { return m_size; }
        Color getBackgroundColor() const { return m_backgroundColor; }

        void setPosition(Vector2 position) { m_position = position; }
        void setSize(Vector2 size) { m_size = size; }
        void setBackgroundColor(Color backgroundColor)
        {
            m_backgroundColor = backgroundColor;
        }

    protected:
        GraphicsObject* p_parent;

        Vector2 m_position;
        Vector2 m_size;

        Color m_backgroundColor;
    };
}

#endif //HBT_GRAPHICSOBJECT_H