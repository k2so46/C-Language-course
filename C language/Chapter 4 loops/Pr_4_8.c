#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to get its factorial: ");
    scanf("%d",&num);
    int factorial = 1;
    for(int i = 1; i <= num;i++){
        factorial *= i;
    }    
    printf("Factorial of the given number is %d",factorial);
    return 0;
}