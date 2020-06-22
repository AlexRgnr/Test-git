// Vérification de fonction
// Ceci est modifié dans la branche fork-test
#include<stdio.h>

float fonc(float x) {
        float s = x*x ;
        return s ;
}

int main(void) {


    float s = fonc(3) ;
    printf("fonc(3) = %.3f\n", s) ;
    printf("f(4) = %.3f\n", fonc(4)) ;
    printf("f(5) = %.3f\n", fonc(5)) ; //ajouté avec la branche

return 0 ;
}