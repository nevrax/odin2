/*
  ==============================================================================

    XYSectionComponent.h
    Created: 27 Feb 2019 8:44:56pm
    Author:  frot

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "GlobalIncludes.h"
#include "XYPadComponent.h"
#include "Knob.h"

#define MODX_POS_X (264 - 150)
#define MODX_POS_Y (564 - 502)
#define MODY_POS_X (264 - 150)
#define MODY_POS_Y (521 - 502)

#define XY_PAD_POSIITON_Y 4
//==============================================================================
/*
 */
class XYSectionComponent : public Component {
public:
  XYSectionComponent(AudioProcessorValueTreeState& vts, std::string p_section_name);
  ~XYSectionComponent();

  void paint(Graphics &) override;
  void resized() override;

private:
  std::string m_section_name;
  AudioProcessorValueTreeState& m_value_tree;

  Knob m_modx;
  Knob m_mody;

  std::unique_ptr<SliderAttachment> m_x_attach;
  std::unique_ptr<SliderAttachment> m_y_attach;

  XYPadComponent m_xy_pad;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(XYSectionComponent)
};
