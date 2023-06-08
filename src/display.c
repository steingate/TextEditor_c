#include "graphics.h"
#include "extgraph.h"
#include "imgui.h"
#include "mouse.h"
#include "display.h"
#include "ds.h"

double Window_Height,Window_Width;
double HeightForButton=0.3,WidthForButton=0.5;
double HeightForTextbox=5;
double StartYOfTextBox,StandardHeightOfTextBox;
char *FileLabels[]={"File","New","Save","Save As","Close","Halt"};
char *EditLabels[]={"Edit","Copy","Paste","Recover","Redo"};
char *HelpLabels[]={"Help","Manul","About"};
static char Content[720][1024]={"0","GGGGGGGGGG"};
int maxn=1024;
int IdOfTextBox[720];

void Initial();
void Menulists();
void Textbox();
void StandardTextBox(int NOL);

void StandardTextBox(int NOL){//NOL: Number of Lines
    char frame[5]={"white"},label[5]={"blue"},hotframe[5]={"blue"},
        hotlabel[5]={"red"};
    int fillflag=0;
    setTextBoxColors(frame,label,hotframe,hotlabel,fillflag);
    IdOfTextBox[NOL]=GenUIID(NOL);
    textbox_ver_syx(IdOfTextBox[NOL],0,StartYOfTextBox-NOL*StandardHeightOfTextBox,
    Window_Width,StandardHeightOfTextBox,Content[NOL],maxn);
    return;
}

void Display(){
    DisplayClear();
    Initial();
    return;
}

void Initial(){
    StartYOfTextBox=Window_Height-HeightForButton-0.1;
    StandardHeightOfTextBox=0.2;
    Menulists();
    Textbox();
    return;
}
void Menulists(){
    Window_Height=GetWindowHeight();
	Window_Width=GetWindowWidth();
    menuList(GenUIID(0),0,Window_Height-HeightForButton,
	WidthForButton,WidthForButton*2,
	HeightForButton,FileLabels,6);
    menuList(GenUIID(0),WidthForButton,Window_Height-HeightForButton,
	WidthForButton,WidthForButton*2,
	HeightForButton,EditLabels,5);
    menuList(GenUIID(0),WidthForButton*2,Window_Height-HeightForButton,
    WidthForButton,WidthForButton*2,HeightForButton,HelpLabels,3);
}
void Textbox(){
    int i;
    for (i = 1; i < 30; i++)
    {
        StandardTextBox(i);
    }
    
    return;
}

