#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "display.h"

void KeyboardEventProcess(int key,int event){
    uiGetKeyboard(key,event);
    Display();
    return;
}