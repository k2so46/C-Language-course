#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[1];
    printf("Value is %u\n",ptr);    
    ptr--;
    printf("Value is %u\n",ptr);
    ptr++;ptr++;
    printf("Value is %u\n",ptr);
       
    return 0;
}