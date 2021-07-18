#include <stdio.h>

int sumFunc(int index){
    int sum;
    if(index=0){
        sum = 0;
    }
    else if(index = 1){
        sum = 1;
    }
    else{
        sum = sum + sumFunc(index - 1);
    }
}
int main()
{
    int number = 5;    
    printf("Sum is %d",sum(10));
    return 0;
}