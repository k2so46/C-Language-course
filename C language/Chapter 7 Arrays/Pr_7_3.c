#include <stdio.h>
int main()
{
    int tableFive[10];
    for(int i = 0; i <= 10; i++){
        tableFive[i] = 5*(i+1);
    }    
    for(int i = 0; i <= 10; i++){
        printf("%d\n",tableFive[i-1]);
    }
    return 0;
}