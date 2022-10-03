/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Dbx231sGraphicEQAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Dbx231sGraphicEQAudioProcessorEditor (Dbx231sGraphicEQAudioProcessor&);
    ~Dbx231sGraphicEQAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Dbx231sGraphicEQAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Dbx231sGraphicEQAudioProcessorEditor)
};
