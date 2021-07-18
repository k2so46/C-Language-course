#include <stdio.h>
#include <string.h>
void decrypt(char *str){
    while(*str != '\0')
    {
        *str -= 1; 
        printf("%c",*str);
        str++;
    }
}
int main()
{
    char ab[] = "Tpnfuijoh!jt!kvtu!hpjoh";
    decrypt(ab);
    return 0;
}