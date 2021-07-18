#include <stdio.h>
void sumAndAvg();
int main()
{
    int a = 5,b = 7,avg,sum;
    sumAndAvg(a,b,&avg,&sum);
    printf("Average = %d and Sum = %d\n",sum,avg);
    return 0;
}

void sumAndAvg(int a, int b, int *sum, int *avg){
    *avg = (a+b)/2;
    *sum = a+b;
}