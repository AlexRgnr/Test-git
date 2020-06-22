// Vérification de fonction
#include<stdio.h>

float fonc(float x) {
        float s = x*x ;
        return s ;
}

int main(void) {


    float s = fonc(3) ;
    printf("fonc(3) = %.3f\n", s) ;
    printf("f(4) = %.3f\n", fonc(4)) ;

return 0 ;
}