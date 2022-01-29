#ifndef HBT_TEXT_H
#define HBT_TEXT_H

#include <string>

#include "Engine/GraphicsObject.h"

namespace hbt
{
    class Text : public GraphicsObject
    {
    public:
        Text(GraphicsObject* parent = nullptr, 
             Vector2 position = {0, 0},
             std::string text = "",
             float fontSize = 12.0f,
             Color color = WHITE,
             std::string fontPath = "",
             float spacing = 2.0f);

        virtual void draw() const override;

    protected:
        std::string m_text;
        float m_fontSize;
        float m_fontSpacing;

        Color m_color;

        Font m_font;
    };
}

#endif //HBT_TEXT_H
