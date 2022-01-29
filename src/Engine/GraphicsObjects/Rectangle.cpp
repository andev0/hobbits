#include "Rectangle.h"

namespace hbt
{
    void Rectangle::draw() const 
    {
        DrawRectangle(m_position.x, m_position.y, m_size.x, m_size.y, m_backgroundColor);
    }
}
