#include <stdio.h>
#include <assert.h>

int NUM_MULTS;

unsigned int funcRec(unsigned int n){
    assert(n >= 0);
    if(n==0 || n==1 || n==2){
        return 1;
    }
    else{
        unsigned int k;
        unsigned int som = 0;
        for(k = 0; k <= n-3; k++){
            NUM_MULTS++;
            som += funcRec(k) * funcRec(n-3-k);
        }
        return funcRec(n-1) + funcRec(n-2) + som;
    }
}

unsigned int funcDin(unsigned int n){
    assert(n >= 0);
    int arr[n+1];
    int som;
    arr[0] = arr[1] = arr[2] = 1;
    int i;
    for (i = 3; i <=n; i++){
        som = 0;
        
        int k;
        for(k = 0; k <= i-3; k++){
            NUM_MULTS++;
            som += arr[k] * arr[i-3-k];
        }
        arr[i] = arr[i-1] + arr[i-2] + som;
    }
    return arr[n];
}

int main(void){
    unsigned int i;
    printf("n,F(n),N Mutls\n");
    for(i = 0; i <= 25; i++){
        NUM_MULTS = 0;
        unsigned int res = funcRec(i);
        printf("%d,%d,%d\n",i,res,NUM_MULTS);
    }
    return 0;
}