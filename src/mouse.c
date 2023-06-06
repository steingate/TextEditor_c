#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "display.h"

void MouseProjectProcess(int x,int y,int button,int event){
    uiGetMouse(x,y,button,event);
    Display();
    return;
}