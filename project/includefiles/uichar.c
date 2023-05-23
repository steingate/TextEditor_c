#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "display.h"

void CharEventProcess(char ch){
    uiGetChar(ch);
    Display();
    return;
}