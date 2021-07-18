#include <math.h>
#include <stdio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter first number: ");   
    scanf("%d",&n1);   
    printf("Enter second number: ");   
    scanf("%d",&n2);   
    printf("Enter third number: ");   
    scanf("%d",&n3);   
    printf("Enter fourth number: ");
    scanf("%d",&n4);
    if(n1>n2 && n1>n3 && n1>n4){
        printf("%d is the greatest number",n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("%d  the greatest number",n2);
    }
    if(n3>n2 && n3>n1 && n3>n4){
        printf("%d is the greatest number",n3);
    }
    if(n4>n2 && n4>n3 && n4>n4){
        printf("%d is the greatest number",n4);
    }

    return 0;
}