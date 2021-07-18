#include <stdio.h>
#include <string.h>
typedef struct BankAcc{
    char name[15];
    int accNum,cvv;
}abc;
int main()
{
    abc b1;
    b1.accNum = 55555;
    b1.cvv = 555;
    strcpy(b1.name,"Abc");
    return 0;
}