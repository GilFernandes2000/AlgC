#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "elapsed_time.h"

typedef long long p;

// Recursiva
p fibonacci(int n, int* mults){
    
    assert(n >= 0);
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return 3*fibonacci(n-1,mults++) + 2*fibonacci(n-2, mults++);
}

// Iterativa
p fiboIter(int n, int* mults){
    int rep = 0;
    assert(n >= 0);
    if(n == 0){
        return 0;
    }

    else if(n == 1){
        return 1;
    }

    p a = 0;
    p b = 1;
    p c = 0;

    for(int i = 2; i <= n; i++){
        rep++;
        c = 3 * b + 2 * a;
        a = b;
        b = c;
    }
    *mults = rep;
    return c;
}

// Equação de Recorrencia
p Rec(int n){
    long double a = powl(0.5*(3+sqrt(17)), n);
    long double b = powl(0.5*(3-sqrt(17)), n);

    return (a-b)/sqrtl(17);
}

// Equação de Exponencial
p Exp(int n){
    long double c1 = 0.24253562503633297352;
    long double c2 = 1.27019663313689157536;

    return round(c1*exp(c2*n));
}

int main(void){
    for(int i = 0; i <= 20; i++){
        int mults;
        (void)elapsed_time();
        p Fib = fibonacci(i, &mults);
        double time = elapsed_time();
        printf("Result = %1llu in %.8fs with %d interactions\n", Fib, time, mults);
    }
    return 0;
}
