#include <stdio.h>
int main()
{
    float p,r,t;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate of intrest: ");
    scanf("%f",&r);
    printf("Enter time in years: ");
    scanf("%f",&t);
    float simpleIntrest = (p*r*t)/100;
    printf("Simple intrest is %f",simpleIntrest);
    return 0;
}