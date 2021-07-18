#include <stdio.h>
void printTable(int *arr, int num, int n);
int main()
{
    int table[3][10];
    printTable(table[0],2,10);
    printTable(table[1],7,10);
    printTable(table[2],9,10);
    return 0;
}
void printTable(int *arr, int num, int n){
    printf("___________Table started___________\n");
    for(int i = 1; i <= n; i++){
        arr[i] = num*i;
    }
    for(int i = 1; i <= n; i++){
        printf("%d X %d = %d\n",num,i,arr[i]);
    }

    printf("________________Table ended__________________\n\n");

}