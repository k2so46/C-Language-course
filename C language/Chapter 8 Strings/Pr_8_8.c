#include <stdio.h>

int count(char a, char *str){
    int occr;
    while(*str != '\0')
    {
        if(*str == a){
            occr++;
        }
        str++;
    }
    return occr;
}
int main()
{
    char *myStr = "Baasic";
    int num = count('a',myStr);
    printf("a letter occured %d number of times",num);
    return 0;
}