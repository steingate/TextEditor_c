#include "ds.h"
#include <stddef.h>
texture text[720];

int texture_lencount(texture *point);
void texture_charcopy(texture *point,char target[],int count);
void texture_addchar(texture *point,int location,char character,int count);
void texture_initial(texture *point,char source[],int count);
void texture_deletechar(texture *point,int location,int count);

int texture_length(texture *point){
    int count=texture_lencount(point);
}
void texture_copy(texture *point,char target[]){
    if (point->next==NULL)
    {
        return;
    }
    texture_charcopy(point->next,target,0);
    return;
}
void texture_add(texture *point,int location,char character){
    texture_addchar(point,location,character,0);
}
void texture_init(texture *point,char source[]){
    texture_initial(point,source,0);
}
void texture_delete(texture *point,int location){
    texture_deletechar(point,location,0);
}


int texture_lencount(texture *point){
    if (point->next==NULL)
    {
        return 1;
    }
    return texture_lencount(point->next)+1;
}
void texture_charcopy(texture *point,char target[],int count){
    target[count]=point->c;
    if (point->next!=NULL)
    {
        texture_charcopy(point->next,target,count+1);
    }
    return;
}
void texture_addchar(texture *point,int location,char character,int count){
    if (count==location)
    {
        texture *temp=(texture *)malloc(sizeof(texture));
        temp->c=character;
        temp->next=point->next;
        point->next=temp;
        return;
    }
    texture_addchar(point->next,location,character,count+1);
}
void texture_deletechar(texture *point,int location,int count){
    if (count>=(location-1))
    {
        point->next=point->next->next;
        return;
    }
    texture_deletechar(point->next,location,count+1);
}
void texture_initial(texture *point,char source[],int count){
    if (source[count]==0)
    {
        if (count==0)
        {
            point->next=NULL;
        }
        return;
    }
    texture *temp=(texture *)malloc(sizeof(texture));
    temp->c=source[count];
    temp->next=NULL;
    point->next=temp;
    texture_initial(temp,source,count+1);
    return;
}