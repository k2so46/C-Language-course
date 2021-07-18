#include <stdio.h>
void tenTimes();
int main()
{
    int myNum = 5;
    printf("The value before function is %d\n",myNum);
    tenTimes(&myNum);
    printf("The value after fuction is %d\n",myNum);
    return 0;
}

void tenTimes(int *num)
{
    *num = 10 * (*num);
}