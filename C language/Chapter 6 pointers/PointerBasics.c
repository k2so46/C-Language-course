#include <stdio.h>
int main()
{
    int i = 5;
    char ch = 'A';
    int *j = &i;
    char *k = &ch;
    int **db = &j;
    printf("The value of j is %d\n",j);    
    printf("The value of j/addrres of i is %d\n",&i);
    printf("The value of k is %c\n",&i);
    printf("The value of db is %d\n",db);
    printf("The value of i is %d\n",*j);
    return 0;
}