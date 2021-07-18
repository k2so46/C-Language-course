#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("Pr_10_5.txt","r");
    ptr = fopen("Pr_10_5.txt","w");
    fscanf(ptr,"%d",&num);
    printf("%d\n",num);
    int updNum = num*2;
    printf("%d\n",updNum);
    fprintf(ptr,"%d",updNum);
    fclose(ptr);
    return 0;
}