struct texture_str
{
    char c;
    struct texture *next;
};
typedef struct texture_str texture;
int texture_length(texture point);
void texture_copy(texture point,char target[]);