#include <stdio.h>
typedef struct Date{
    int dd,mm,yyyy;
}date;
void compare(date d1, date d2);
void display(date d);
int main()
{
    date m1 = {23,13,2008};    
    date m2 = {21,12,2008};
    compare(m1,m2);
    return 0;
}

void compare(date d1, date d2){
    if(d1.yyyy > d2.yyyy){
        printf("Date 1 is bigger\n");
    }
    else if(d2.yyyy > d1.yyyy){
        printf("Date 2 is bigger\n");
    }
    else if(d1.mm > d2.mm && d1.mm < 12){
        printf("Date 1 is bigger\n");
    }
    else if(d2.mm > d1.mm && d2.mm < 12){
        printf("Date 2 is bigger\n");
    }
    else if(d1.dd > d2.dd && d1.dd < 31){
        printf("Date 1 is bigger\n");
    }
    else if(d2.dd > d1.dd && d2.dd < 31){
        printf("Date 2 is bigger\n");
    }
    else if(d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd){
        printf("Dates are equal\n");
    }
    else{
        printf("Enter a valid date");
    }

}

void display(date d){
    printf("%d-%d-%d",d.dd,d.mm,d.yyyy);
}