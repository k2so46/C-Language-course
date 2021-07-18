#include <stdio.h>

void myStrcpy(char *target, char *source){
    *target = *source;
}
int main()
{
    char *s1 = "Abc",*s2;
    myStrcpy(s2,s1);
    printf("%s",s2);
    return 0;
}