#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *) malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n\nReallocation started\n\n");
    realloc(ptr,10);
    for(int i = 5; i < 10; i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    free(ptr);
    return 0;
}