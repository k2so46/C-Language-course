#include <stdio.h>
int main()
{
    int num1, num2;
    char name1[15], name2[15];
    printf("Enter name and salary of first employee: ");    
    scanf("%d %s",&num1,&name1);
    printf("Enter name and salary of second employee: ");    
    scanf("%d %s",&num2,&name2);
    FILE *ptr;
    ptr = fopen("Employee.txt","w");
    fprintf(ptr,"%s, %d\n",name1,num1);
    fprintf(ptr,"%s, %d\n",name2,num2);
    return 0;
}