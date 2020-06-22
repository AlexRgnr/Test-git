#include<stdio.h>

float fonc(float x) {
        float s = x*x ;
        return s;
}

int main(void) {


    float s = fonc(3) ;
    printf("Fonc = %.3f\n", s) ;

return 0 ;
}