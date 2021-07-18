#include <stdio.h>
void getAddress();
int main()
{
    int i = 43;
    int *j = &i;
    printf("The value of the address of i is %u\n",j);
    getAddress(i);
    // The value of the addresses will be diffrent as they are just copies of one value
    printf("The value of the addresses will be diffrent as they are just copies of one value\n");
    return 0;
}

void getAddress(int num){
    int *j = &num;
    printf("The value of address of the variable is %u\n",j);
}