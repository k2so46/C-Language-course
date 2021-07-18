#include <stdio.h>
#include <string.h>
void encrypt(char *str,int key){
    printf("Decrypted string is ");
    while(*str != '\0')
    { 
        *str -= key;
        printf("%c",*str);
        str++;
    }
}
int main()
{
    char ab[10];
    int key;
    printf("Enter a string to decrypt it: ");
    gets(ab);
    printf("Enter the key: ");
    scanf("%d",&key);
    encrypt(ab,5);
    return 0;
}