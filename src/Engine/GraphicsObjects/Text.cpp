#include "Text.h"

namespace hbt
{
    Text::Text(GraphicsObject* parent, 
               Vector2 position,
               std::string text,
               float fontSize,
               Color color,
               std::string fontPath,
               float spacing) 
        : GraphicsObject(parent, position, {0, 0}, BLACK)
        , m_text(text)
        , m_fontSize(fontSize)
        , m_fontSpacing(spacing)
        , m_color(color)
    {
        if (fontPath == "")
        {
            m_font = GetFontDefault();
        }

        m_font = LoadFont(fontPath.c_str());

        SetTextureFilter(m_font.texture, TEXTURE_FILTER_TRILINEAR);
    }

    void Text::draw() const
    {
        DrawTextEx(m_font, m_text.c_str(), m_absolutePosition, m_fontSize, m_fontSpacing, m_color);
    }
}
