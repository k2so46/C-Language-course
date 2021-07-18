#include <stdio.h>
typedef struct Time{
    int hr,mm,sec;
}time;
void compareTime(time t1, time t2);
int main()
{
    time m1 = {12,56,45};
    time m2 = {10,36,42};
    compareTime(m1,m2);
    return 0;
}
void compareTime(time t1, time t2){
    if (t1.hr > t2.hr)
    {
        printf("Time 1 is bigger");
    }
    else if (t2.hr > t1.hr)
    {
        printf("Time 2 is bigger");
    }
    else if (t1.mm > t2.mm)
    {
        printf("Time 1 is bigger");
    }
    else if (t2.mm > t1.mm)
    {
        printf("Time 2 is bigger");
    }
    else if (t1.sec > t2.sec)
    {
        printf("Time 1 is bigger");
    }
    else if (t2.sec > t1.sec)
    {
        printf("Time 2 is bigger");
    }   
}