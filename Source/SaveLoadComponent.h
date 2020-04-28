/*
  ==============================================================================

    SaveLoadComponent.h
    Created: 27 Feb 2019 11:01:28am
    Author:  frot

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "GlobalIncludes.h"
#include "GlasDisplay.h"
#include "PluginProcessor.h"

#define LOAD_POS_X 134
#define LOAD_POS_Y 5
#define SAVE_POS_X 3
#define SAVE_POS_Y LOAD_POS_Y
#define PATCH_POS_X 39
#define PATCH_POS_Y 4
#define RESET_TOP_POS_X 170
#define RESET_TOP_POS_Y LOAD_POS_Y
#define RANDOM_POS_X 218
#define RANDOM_POS_Y LOAD_POS_Y


class FileElementComparatorAlphabetical
{
public:
    static int compareElements (const File &first, const File &second)
    {
        return first.getFileName().compare(second.getFileName());
    }
};


class SaveLoadComponent : public Component {
public:
  SaveLoadComponent(AudioProcessorValueTreeState &vts, OdinAudioProcessor& p_processor);
  ~SaveLoadComponent();

  void paint(Graphics &) override {}
  void forceValueTreeOntoComponents(ValueTree p_tree);

  std::function<void()> forceValueTreeLambda;

  void resetPatchText(){
    m_patch.setText(m_value_tree.state.getChildWithName("misc")["patch_name"].toString().toStdString());
  }

  void loadPatchFromOpenedFileStream(juce::FileInputStream &p_file);

  void setGUIBig();
  void setGUISmall();

private:

  bool m_GUI_big = false;

  bool checkForBiggerVersion(FileInputStream &p_file_stream, std::string &p_version_string);
  bool checkForSmallerVersion(FileInputStream &p_file_stream, std::string &p_version_string);
  void versionMigrate();

  OdinAudioProcessor& m_audio_processor;

  std::unique_ptr<FileChooser> m_filechooser;
  AudioProcessorValueTreeState &m_value_tree;
  
  String m_last_directory;

  juce::DrawableButton m_save;
  juce::DrawableButton m_load;
  juce::DrawableButton m_reset;
  //juce::DrawableButton m_random;

  GlasDisplay m_patch;
  int m_patch_size_x;
  int m_patch_size_y;

  OdinMenuFeels m_menu_feels;
  juce::PopupMenu m_patch_dropdown_menu;

  FileElementComparatorAlphabetical m_file_comparator;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SaveLoadComponent)
};


