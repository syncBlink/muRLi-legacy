#ifndef SPLASHVIEW_H
#define SPLASHVIEW_H

#include "../view.hpp"
#include "../display.hpp"

namespace Murli
{
    class SplashView : public View
    {
        public:
            void drawFrame(DisplayCtrl& display) override
            {
                display.setFont(u8g2_font_maniac_tf);
                drawVHCenteredStr(display, "muRLi");
            }
    };
}

#endif // SPLASHVIEW_H