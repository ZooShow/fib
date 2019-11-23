#include "fib.h"
#include <iostream>
int fib (int a){
    if (a<1){
        std::cout << "Число должно быть > 0";
        return 0;
    }
    if (a ==1 || a==2) {
        return 1;
    } else{
        return fib(a-1)+fib(a-2);
    }
}
