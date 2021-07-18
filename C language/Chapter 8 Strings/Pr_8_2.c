#include <string.h>
#include <stdio.h>
int main()
{
    char *st1,*st2;
    printf("Enter a string: ");
    while(*st1 != '\0')
    {
        scanf("%c",&st1);
        st1++;
    }    
    printf("Enter same string: ");
    scanf("%s",&st2);
    if(strcmp(st1,st2) == 0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }

    return 0;
}