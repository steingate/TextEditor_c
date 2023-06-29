#ifndef DS_H
#define DS_H
struct texture_str
{
    char c;
    struct texture_str *next;
};
typedef struct texture_str texture;
int texture_length(texture *point);
void texture_copy(texture *point,char target[]);
void texture_add(texture *point,int location,char character);
void texture_init(texture *point,char source[]);
void texture_delete(texture *point,int location);
#endif