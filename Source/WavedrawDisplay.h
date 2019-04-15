/*
  ==============================================================================

    WavedrawDisplay.h
    Created: 2 Mar 2019 1:38:37am
    Author:  frot

  ==============================================================================
*/

#pragma once

#include "GlobalIncludes.h"
#include "../JuceLibraryCode/JuceHeader.h"
#include "audio/Oscillators/WavetableContainer.h"
#define INLAY_DEFAULT_WAVEDRAW 2

#define DRAW_INLAY_LEFT 3
#define DRAW_INLAY_RIGHT 3
#define DRAW_INLAY_UP 5
#define DRAW_INLAY_DOWN 3
#define WAVEDRAW_THICCNESS 2
//==============================================================================
/*
*/
class WavedrawDisplay    : public Component, public SettableTooltipClient
{
public:
    WavedrawDisplay();
    ~WavedrawDisplay();

  void paint(Graphics &) override;
  void resized() override;
  void setInlay(int p_inlay) { m_inlay = p_inlay; }
  void setColor(juce::Colour p_color) { m_color = p_color; }
  void setDrawColor(juce::Colour p_draw_color) { m_draw_color = p_draw_color; }

  void mouseDrag(const MouseEvent &event) override;
  void mouseDown(const MouseEvent &event) override;
  void mouseUp(const MouseEvent &event) override;
  
  void mouseInteraction();

  float* getDrawnTable();

  

  std::function<void()> onDraw= []() {};
private:
  bool m_mouse_was_down = false;
  int m_last_x_value;

  int m_inlay = INLAY_DEFAULT_WAVEDRAW;
  juce::Image m_glaspanel;
  juce::Colour m_color = juce::Colours::black;
  juce::Colour m_draw_color = juce::Colours::white;

  float m_draw_values[WAVEDRAW_STEPS_X] = {0.f, 0.5f, -0.9f};

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WavedrawDisplay)
};
