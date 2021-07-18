#include <stdio.h>

int fibonacciElement(int n){
    if(n == 1 || n == 2){
        n = 1;
    }
    else{
    n = fibonacciElement(n-1) + fibonacciElement(n-2);
    }
}
int main()
{
    printf("Element = %d",fibonacciElement(55));
    return 0;
}