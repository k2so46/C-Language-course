#include <stdio.h>
int main()
{
    int inp;
    printf("Enter year: ");
    scanf("%d",&inp);
    if((inp%4 == 0 && inp%100 != 0) || inp%400 == 0){
        printf("The entered year is a leap year");
    }
    else{
        printf("The year entered is not a leap year");
    }
    return 0;
}