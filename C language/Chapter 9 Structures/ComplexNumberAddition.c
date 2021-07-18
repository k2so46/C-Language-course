#include <stdio.h>

typedef struct Complex{
    float real,imag;
}comp;
void display(comp g);
void getSum(comp g1, comp g2){
    float sumReal = g1.real + g2.real;
    float sumImag = g1.imag + g2.imag;
    printf("Sum => %.2f + %.2fi",sumReal,sumImag);
}
int main()
{
    comp cnums[2];
    for(int i = 0; i < 2; i++){
        printf("Enter the value of real part of %d number: ", i+1);
        scanf("%f",&cnums[i].real);
        printf("Enter the value of imaginary part of %d number: ", i+1);
        scanf("%f",&cnums[i].imag);
    }
    getSum(cnums[0],cnums[1]);

    return 0;
}
void display(comp g){
    printf("Complex number => %.2f + %.2fi\n",g.real, g.imag);
}