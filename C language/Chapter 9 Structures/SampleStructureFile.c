#include <stdio.h>
#include <string.h>
struct Student{
    int rNum;
    char name[20];
    float avgMarks;
};

int main()
{
    struct Student s1;
    s1.rNum = 2;
    s1.avgMarks = 55.5;
    strcpy(s1.name,"Student1");
    printf("Roll number is %d\n",s1.rNum);    
    printf("Name is %s\n",s1.name);    
    printf("Average marks are %f\n",s1.avgMarks);    
    struct Student s[15];
    s[0].rNum = 3;
    s[0].avgMarks = 75.5;
    strcpy(s[0].name,"Student2");
    printf("Roll number is %d\n",s[0].rNum);    
    printf("Name is %s\n",s[0].name);    
    printf("Average marks are %f\n",s[0].avgMarks);    
    return 0;
}