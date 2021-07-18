#include <stdio.h>
void tenTimes();
int main()
{
    int myNum = 5;
    printf("The value before function is %d\n",myNum);
    tenTimes(&myNum);
    printf("The value after fuction is %d\n",myNum);
    // Value will not change here as value by refrence is not used
    printf("Value will not change here as value by refrence is not used");
    return 0;
}

void tenTimes(int num)
{
    int sample = 10;
    num = sample * num;
}