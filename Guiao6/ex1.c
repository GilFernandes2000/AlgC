#include <stdio.h>
#include <assert.h>

int NUM_COMPS;

unsigned int funcT1 (unsigned int n){

    assert(n>=0);
    NUM_COMPS++;
    if(n == 0){
        return 0;
    }
    else{
        return funcT1(n/4) + n;
    }
}

unsigned int funcT2 (unsigned int n){
    
    assert(n>=0);
    NUM_COMPS++;
    if(n == 0 || n == 1 || n == 2 || n == 3){
        return n;
    }
    else{
        return funcT2(n/4) + funcT2((n+3)/4) + n;
    }
}

unsigned int funcT3(unsigned int n){

    assert(n >= 0);
    NUM_COMPS++;
    if(n == 0 || n == 1 || n == 2 || n == 3){
        return n;
    }
    if(n%4 == 0){
        return 2 * funcT3(n/4) + n;
    }
    return funcT3(n/4) + funcT3((n+3)/4) + n;
}

int main(void){
    printf("| n | T1(n) | N Rec | T2(n) | N Rec | T3(n) | N Rec |\n");
    for(int i = 0; i <= 28; i++){
        NUM_COMPS = -1;
        unsigned int res1 = funcT1(i);
        int comps1 = NUM_COMPS;

        NUM_COMPS = -1;
        unsigned int res2 = funcT2(i);
        int comps2 = NUM_COMPS;

        NUM_COMPS = -1;
        unsigned int res3 = funcT3(i);
        int comps3 = NUM_COMPS;
        printf("|%2d | %5d | %5d | %5d | %5d | %5d | %5d |\n", i, res1, comps1, res2, comps2, res3, comps3);
    }
}