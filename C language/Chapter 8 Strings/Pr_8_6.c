#include <stdio.h>
#include <string.h>
void encrypt(char *str){
    while(*str != '\0')
    {
        *str += 1; 
        printf("%c",*str);
        str++;
    }
}
int main()
{
    char ab[] = "Something is just going";
    encrypt(ab);
    return 0;
}