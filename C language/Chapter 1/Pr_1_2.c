#include <stdio.h>
int main()
{
    float r,h;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Enter height: ");
    scanf("%f",&h);
    printf("Area of circle  is %f square units.\n",pi*r*r);
    printf("Volume of cylinder is %f cubic units.",pi*r*r*h);    
    return 0;
}