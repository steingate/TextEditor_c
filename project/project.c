#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "mouse.h"
#include "keyboard.h"
#include "display.h"
#include "uichar.h"

void Main()
{
	SetWindowTitle("project");
	InitGraphics();
    registerMouseEvent(MouseProjectProcess);
    registerKeyboardEvent(KeyboardEventProcess);
    registerCharEvent(CharEventProcess);
    Display();
    return;
}
