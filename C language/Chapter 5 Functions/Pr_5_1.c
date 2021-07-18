#include <stdio.h>
int average(int num1,int num2,int num3){
    return (num1+num2+num3)/3;
}
int main()
{
    printf("Average is %d",average(18,6,27));
    return 0;
}