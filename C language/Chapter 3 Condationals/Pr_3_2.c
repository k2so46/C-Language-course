#include <stdio.h>
int main()
{
    float m1,m2,m3;
    printf("Enter first subject marks: ");
    scanf("%f",&m1);
    printf("Enter second subject marks: ");
    scanf("%f",&m2);
    printf("Enter third subject marks: ");
    scanf("%f",&m3);
    int percentage = ((m1+m2+m3)/300)*100;
    if(m1<33||m2<33||m3<33)
    {
        printf("You have failed due to less percentage in a particular subject");
    }
    else if (percentage<40)
    {
        printf("You have failed due to less percentage overall");
    }
    else
    {
        printf("Congrats, you have passed");
    }
    
    return 0;
}