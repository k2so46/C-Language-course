#include <stdio.h>
int main()
{
    int tableNum[10],num;
    printf("Enter the value to get a table: ");
    scanf("%d",&num);
    for(int i = 0; i < 10; i++){
        tableNum[i] = num*(i+1);
    }    
    for(int i = 0; i < 10; i++){
        printf("%d X %d = %d\n",num,i+1,tableNum[i]);
    }
    return 0;
}