#include <stdio.h>

float getWeight(float mass){
    float g = 9.8;
    return mass * g;
}
int main()
{
    float mass;
    printf("Enter mass of the body in kilograms: ");
    scanf("%f",&mass);
    float weight = getWeight(mass);
    printf("Weight of the body is %.2f newtons",weight);
    return 0;
}