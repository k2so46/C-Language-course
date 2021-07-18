#include <stdio.h>

struct Vector2D{
    int x,y;
};

int main()
{
    struct Vector2D v1, v2;
    v1.x = 2;
    v1.y = 7;
    v2.x = 5;
    v2.y = 10;
    int sX = v1.x+v2.x;
    int sY = v1.y + v2.y;
    printf("Sum is (%d, %d)",sX,sY);
    return 0;
}