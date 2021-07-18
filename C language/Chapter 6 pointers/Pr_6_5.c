#include <stdio.h>
int main()
{
    int i = 55;
    int *j = &i;
    int **k = &j;
    printf("The address of variable j is %u\n",k);
    return 0;
}