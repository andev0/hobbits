#include "Rectangle.h"

namespace hbt
{
    void Rectangle::draw() const 
    {
        DrawRectangle(m_absolutePosition.x, m_absolutePosition.y,
                      m_size.x, m_size.y,
                      m_backgroundColor);
    }
}
