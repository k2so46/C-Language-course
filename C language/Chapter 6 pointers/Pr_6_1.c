#include <stdio.h>

int main()
{
    int v = 55;
    int *a = &v;
    printf("The address of v is %d\n",a);
    printf("The value of v from its address is %d\n",*a);
    return 0;
}