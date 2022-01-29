#include "GraphicsObject.h"


namespace hbt
{
    GraphicsObject::GraphicsObject(GraphicsObject* parent, 
                                   Vector2 position,
                                   Vector2 size,
                                   Color backgroundColor) 
        : p_parent(parent)
        , m_size(size)
        , m_backgroundColor(backgroundColor)
    {
        setPosition(position);
    }
    
    void GraphicsObject::setPosition(Vector2 position) 
    {
        m_position = position;
        
        if (p_parent != nullptr)
        {
            m_absolutePosition = {p_parent->m_absolutePosition.x + position.x, 
                                  p_parent->m_absolutePosition.y + position.y};
        }
        else
        {
            m_absolutePosition = position;
        }
    }
}