#include <stdio.h>
int main()
{
    FILE *fptr;
    FILE *ptr;
    fptr = fopen("Pr_10_3.txt","r");
    ptr = fopen("Pr_10_3(generated).txt","w");
    char ch;
    while(1){
        ch = fgetc(fptr);
        fprintf(ptr,"%c",ch);
        if(ch == EOF){
            break;
        }
    }
    fclose(fptr);
    fclose(ptr);
    return 0;
}