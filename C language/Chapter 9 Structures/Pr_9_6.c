#include <stdio.h>

struct Complex{
    float real,imag;
};
void display(struct Complex g){
    printf("Complex number => %.2f + %.2fi\n",g.real, g.imag);
}
int main()
{
    struct Complex cnums[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the value of real part of %d number: ", i+1);
        scanf("%f",&cnums[i].real);
        printf("Enter the value of imaginary part of %d number: ", i+1);
        scanf("%f",&cnums[i].imag);
    }
    for (int i = 0; i< 5; i++){
        display(cnums[i]);
    }

    return 0;
}