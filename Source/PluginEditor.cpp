/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
Fm_synthAudioProcessorEditor::Fm_synthAudioProcessorEditor(Fm_synthAudioProcessor& p)
    : AudioProcessorEditor(&p), processor(p)
{


    int height = 900;
    int width = 1200;

    setSize(width, height);


    int barHeight = 20;

    int heightForY = height + barHeight;
    int heightForHeight = height - barHeight;

    textButtons.push_back(new TextButton("Modulation Matrix"));
    textButtons.push_back(new TextButton("Fxs"));

    //modules initialization
    std::vector<ModuleGui*> fxsModules;
    std::vector<ModuleGui*> matrixModules;

    matrixModules.push_back(new MatrixGui(0, barHeight, width, height-barHeight));
    modules.push_back(matrixModules);



    fxsModules.push_back(new OscillatorGui(0, height / 2, width / 2, height / 2));
    fxsModules.push_back(new MatrixGui(width / 2, height / 2, width / 2, height / 2));
    fxsModules.push_back(new FilterGui(0, 0, width / 2, height / 2));
    fxsModules.push_back(new EnvelopeGui(width / 2, 0, width / 4, height / 4));
    fxsModules.push_back(new EnvelopeGui(width / 2, height / 4, width / 4, height / 4));
    fxsModules.push_back(new EnvelopeGui(width * 3 / 4, 0, width / 4, height / 4));
    fxsModules.push_back(new EnvelopeGui(width * 3 / 4, height / 4, width / 4, height / 4));

    modules.push_back(fxsModules);



    //adds and makes visible all the created modules 
    int i = 0;
    for (auto& moduleType : modules) {
        for (auto& module : moduleType) {
            module->setFramesPerSecond(60);
            module->setMyBounds();
            addAndMakeVisible(module);
            if (i == 1) {
                module->setVisible(false);
            }
        }
        i++;
    }


    i = 0;
    for (auto& button : textButtons) {
        button->setBounds(i * width / textButtons.size(), 0, width / textButtons.size(), barHeight);
        addAndMakeVisible(button);
        i++;
    }

}

Fm_synthAudioProcessorEditor::~Fm_synthAudioProcessorEditor()
{

    for (auto& moduleType : modules) {
        for (auto& module : moduleType) {
            if (module != nullptr) {
                delete module;
            }
        }
    }

    for (auto& button : textButtons) {
        if (button != nullptr) {
            delete button;
        }

    }

}

//==============================================================================
void Fm_synthAudioProcessorEditor::paint(Graphics& g)
{

}

void Fm_synthAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    /**setResizable(true, true);


    for (auto &module : modules) {
       // module->setBounds(module->getX(), module->getY(), module->width, module->height);
        module->setMyBounds();
        addAndMakeVisible(module);
    } */

}

void Fm_synthAudioProcessorEditor::buttonStateChanged(Button* button)
{
}

void Fm_synthAudioProcessorEditor::buttonClicked(Button* button) {
    if (button->getButtonText() == "ciao") {

    }

}
