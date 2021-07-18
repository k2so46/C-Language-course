#include <stdio.h>
int countPositive();
int main()
{
    int array[10] = {1,-2,3,-4,5,-6,7,8,9,10};
    printf("%d elements are positive\n",countPositive(array));
    return 0;
}
int countPositive(int *arr){
        int sn = 0;
    for(int i = 1; i<= 10; i++){
        if(arr[i] > 0){
            sn++;
        }
    }
    return sn;
}