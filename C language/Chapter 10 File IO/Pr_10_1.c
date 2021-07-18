#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Pr_10_1.txt","rw");
    int a,b,c;
    fscanf(fptr,"%d %d %d",&a, &b, &c);
    int num = 2*a;
    printf("%d",num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}