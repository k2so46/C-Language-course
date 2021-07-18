#include <stdio.h>
int main()
{
    float inc;
    printf("Enter your income in lakhs per year: ");
    scanf("%f",&inc);
    if(inc<2.5){
        printf("You don't have to pay any tax");
    }
    else if (inc > 2.5 && inc < 5.0){
        printf("Your tax is %f",(inc*100000)/20);
    }
    else if(inc>5.0 && inc<10.0){
        printf("Your tax is %f",(inc*100000)/5);
    }
    else{
        printf("Your tax is %f",(inc*100000)/(3.0/10));
    }
    return 0;
}