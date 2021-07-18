#include <stdio.h>
int main()
{
    // Primitive way
    // char *st = {'T','h','i','s','\0'};
    char *st = "This";
    while(*st != '\0')
    {
        printf("%c",*st);
        st++;
    }

    // Convinient  way
/*     char str[] = "This";
    printf("String is %s\n",str); */

    // Gets and puts
    /* char inp[25];
    printf("Enter a multi word string: ");
    gets(inp);
    printf("Your input was ");
    puts(inp);
    return 0; */
}