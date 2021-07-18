#include <stdio.h>

float toFahrenheit(float temp){
    return (temp*1.8) + 32;
}
int main()
{
    float temp;
    printf("Enter temprature in centigrade: ");
    scanf("%f",&temp);
    printf("Temprature in fahrenheit is %f",toFahrenheit(temp));
    return 0;
}