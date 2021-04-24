#include <stdio.h>
#include <assert.h>

int NUM_COMPS;

int func(int *arr, int n){
// O(n^3)

    assert(n > 2);
    NUM_COMPS = 0;
    int certos = 0;
    
    for(int k = 2; k < n; k++){ // acontece n vezes

        for(int j = 1; j < k; j++){ //acontece n vezes

            for(int i = 0; i < j; i++){ //acontece n vezes

                int val = arr[i] + arr[j];
                if(arr[k] == val){
                    certos += 1;
                }
                NUM_COMPS += 1;
            }
        }
    }
    return certos;
}


int main(void){
    int arr0[5] = {2,4,3,2,7};
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr6[20] = {1,4,3,5,7,6,9,8,10,4,3,6,2,7,3,0,7,2,6,1};
    int arr7[40] = {1,2,4,3,5,3,2,6,8,6,3,4,6,3,2,5,7,5,7,8,9,5,4,0,7,3,2,4,0,8,6,4,2,4,5,7,5,3,1,3};
    int arr8[80]; // nao é necessario gerar numeros aleatorios

    int res  = func(arr0, 5);
    printf("Resultado: %d Operacoes: %d\n", res, NUM_COMPS);

    res = func(arr1, 10);
    printf("Resultado: %d Operacoes: %d\n", res, NUM_COMPS);

    res = func(arr6, 20);
    printf("Resultado: %d Operacoes: %d\n", res, NUM_COMPS);
    
    res = func(arr7, 40);
    printf("Resultado: %d Operacoes: %d\n", res, NUM_COMPS);

    res = func(arr8, 80);
    printf("Resultado: %d Operacoes: %d\n", res, NUM_COMPS);

    return 0;
}