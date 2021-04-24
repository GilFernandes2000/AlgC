#include <stdio.h>
#include <assert.h>

int NUM_COMPS; 

int func(int *arr, int size){
    assert(size > 2);
    int certo = 0;
    NUM_COMPS = 0;

    for(int i = 1; i < size-1; i++){
        int val = arr[i-1] + arr[i+1];

        if(arr[i] == val){
            certo += 1;
        }
        
        NUM_COMPS +=1;
    }
    return certo;
}

int main(void){
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {1,2,1,4,5,6,7,8,9,10};
    int arr3[10] = {1,2,1,3,2,6,7,8,9,10};
    int arr4[10] = {0,2,2,0,3,3,0,4,4,0};
    int arr5[10] = {0,0,0,0,0,0,0,0,0,0};
    int count = func(arr1, 10);
    printf("Resultado: %d Operacoes: %d\n", func(arr1, 10), NUM_COMPS);

    printf("Resultado: %d Operacoes: %d\n", func(arr2, 10), NUM_COMPS);

    printf("Resultado: %d Operacoes: %d\n", func(arr3, 10), NUM_COMPS);

    printf("Resultado: %d Operacoes: %d\n", func(arr4, 10), NUM_COMPS);

    printf("Resultado: %d Operacoes: %d\n", func(arr5, 10), NUM_COMPS);
    
}