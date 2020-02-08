#include <iostream>
#include <stdint.h>

void function1(int *a) {
    *a = *a + 1 ;
}

int main(void) {
    int *a ;
    a = (int *)malloc(100*sizeof(int)) ;
    *a = 5 ;

 std::cout << "a = " << *a << std::endl ;
 function1(a) ;
 std::cout << "a = " << *a << std::endl ;
}