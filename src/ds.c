#include "ds.h"
texture text[720];
int texture_length(texture point){
    int count=0;
    texture_lencount(point,&count);
}
void texture_lencount(texture point,int *count){
    *count++;
    if (point.next==NULL)
    {
        return;
    }
    texture_lencount(point.next,count);
    return;
}
void texture_copy(texture point,char target[]){
    texture_charcopy(point,target,0);
}
void texture_charcopy(texture point,char target[],int count){
    target[count]=point.c;
    if (point.next!=NULL)
    {
        texture_charcopy(point.next,target,count+1);
    }
    return;
}