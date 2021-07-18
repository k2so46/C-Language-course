#include <stdio.h>

void ifChar(char a, char *str){
    int occr;
    while(*str != '\0')
    {
        if(*str == a){
            printf("%c character is present in %s string\n",a,str);
            break;       
        }
        str++;
    }
}
int main()
{
    char *myStr = "Baasic";
    ifChar('a',myStr);
    return 0;
}