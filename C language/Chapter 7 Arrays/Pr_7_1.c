#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    int *ptr = &arr[0];
    ptr++;ptr++;
    printf("Value of 3rd element is %d",*ptr);    
    return 0;

    // 2 False
}