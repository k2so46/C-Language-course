#include <stdio.h>

struct Vector2D{
    int x,y;
};
int main()
{
    struct Vector2D v2;
    v2.x = 5;
    v2.y = 10;
    printf("Vector is (%d, %d)",v2.x,v2.y);
    return 0;
}