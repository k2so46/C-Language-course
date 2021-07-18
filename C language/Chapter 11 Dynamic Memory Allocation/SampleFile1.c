#include <stdio.h>
#include <stdlib.h>
int main()
{
    // calloc() function and malloc() function quickQuiz
    // int *ptr;
    // int n;
    // printf("How may integers you want to store? ");
    // scanf("%d",&n);
    // ptr = (int *) malloc(n * sizeof(int));
    // for(int i = 0; i<n; i++){
    //     printf("Enter the value of %d element: ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i = 0; i<n; i++){
    //     printf("The value of %d element is %d\n",i+1,ptr[i]);
    // }
    // free(ptr);
    int *nptr;
    int num;
    printf("How may integers you want to store? ");
    scanf("%d",&num);
    nptr = (int *) calloc(num, sizeof(int));
    for(int i = 0; i<num; i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&nptr[i]);
    }
    for(int i = 0; i<num; i++){
        printf("The value of %d element is %d\n",i+1,nptr[i]);
    }
    
    return 0;
}