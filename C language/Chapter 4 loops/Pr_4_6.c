#include <stdio.h>
int main()
{
        int i = 0;
        int sn = 0;
    do{
        printf(i);
        i++;
        sn += i;
    }while(i<=10);   
    printf("Sum is %d",sn);
    return 0;
}