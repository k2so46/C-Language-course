#include <stdio.h>

struct Employee{
    int a,b,c;
};

int main()
{
    struct Employee *ptr;
    struct Employee e;
    (*ptr).a = 5;    
    ptr->b = 7;    
    e.c = 9;
    printf("Value is %d",ptr->b);
    return 0;
}