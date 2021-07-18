#include <stdio.h>
int main()
{
    int i = 0;
    int sn = 0;
    while(i<=10){
        i++;
        sn += i;
    }
    printf("Sum is %d",sn);   
    return 0;
}