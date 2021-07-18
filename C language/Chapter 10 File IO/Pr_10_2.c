#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to get its table in a generated file: ");
    scanf("%d",&num);
    FILE *fptr;
    fptr = fopen("TableOfNum.txt","w");
    for(int i = 1; i <= 10; i++){
        fprintf(fptr,"%d X %d = %d\n",num,i,num*i);
    }
    printf("Table generated in TableOfNum.txt file");
    fclose(fptr);
    return 0;
}