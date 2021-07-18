#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temprature in centigrade: ");
    scanf("%f",&temp);
    printf("Temprature in farenhiet is %f",(temp*1.8) + 32);    
    return 0;
}