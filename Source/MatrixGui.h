/*
  ==============================================================================

    MatrixGui.h
    Created: 23 May 2020 4:13:06pm
    Author:  daveg

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "ModuleGui.h"

//==============================================================================
/*
*/
class MatrixGui    : public ModuleGui
{
public:
    MatrixGui();
    MatrixGui(int x, int y, int w, int h);
    ~MatrixGui();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MatrixGui)
};
