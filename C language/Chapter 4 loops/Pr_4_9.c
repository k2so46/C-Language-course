#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to get its factorial: ");
    scanf("%d",&num);
    int factorial = 1;
    int i = 1;
    while(i <= num){
        i++;
        factorial *= i;
    }
    printf("Factorial of the given number is %d",factorial);
       
    return 0;
}