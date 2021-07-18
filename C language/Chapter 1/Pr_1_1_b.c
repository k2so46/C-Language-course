#include <stdio.h>
int main()
{
    int l1,l2;
    printf("Enter length: ");
    scanf("%d",&l1);
    printf("Enter breadth: ");
    scanf("%d",&l2);
    int ar = l1*l2;
    printf("Area is %d square units",ar);    
    return 0;
}