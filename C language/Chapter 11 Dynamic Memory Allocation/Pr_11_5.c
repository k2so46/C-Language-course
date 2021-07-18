#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr; int num;
    printf("Enter the number you want to get table of: ");
    scanf("%d",&num);
    ptr = (int *) calloc(10,sizeof(int));
    printf("Allocation done\n");
    realloc(ptr,15);
    printf("Now reallocation for 15 elements done\n");
    for(int i = 0; i < 15; i++){
        ptr[i] = num*(i+1);
    }
    for(int i = 0; i < 15; i++){
        printf("%d X %d = %d\n",num,i+1,ptr[i]);
    }
    

    return 0;
}