/*
  ==============================================================================

    EnvelopeGui.h
    Created: 23 May 2020 4:13:15pm
    Author:  daveg

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class EnvelopeGui    : public Component
{
public:
    EnvelopeGui();
    ~EnvelopeGui();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EnvelopeGui)
};