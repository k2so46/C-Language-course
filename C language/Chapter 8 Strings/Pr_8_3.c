#include <stdio.h>

int myStrlen(char *str);
int main()
{
    char *str = "This";
    int myLen = myStrlen(str);
    printf("Length is %d",myLen);
    return 0;
}
int myStrlen(char *str){
    int len;
    while(*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}