#include <stdio.h>
int main()
{
    int sn = 0;
    for(int i = 0; i<=10; i++){
        sn += 8*i;
    }
    printf("Sum is %d",sn);
}