/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1_VIEW_BASE_HPP
#define SCREEN1_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}

protected:
    FrontendApplication& application() { 
        return *static_cast<FrontendApplication*>(Application::getInstance()); 
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Image bg_image;
    touchgfx::TextAreaWithOneWildcard powerLabel;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::ClickListener< touchgfx::Button > color_button;

    /*
     * Wildcard Buffers
     */
    static const uint16_t POWERLABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar powerLabelBuffer[POWERLABEL_SIZE];

private:

};

#endif // SCREEN1_VIEW_BASE_HPP
