#include <stdio.h>
#include <assert.h>

int NUM_COMP;

int func(int *arr, int size){
    assert(size > 2);
    NUM_COMP = 0;
    int res = 1;
    int r = arr[1]/arr[0];
    for(int i = 1; i< size; i++){
        int val = r*arr[i-1];
        NUM_COMP++;
        if(arr[i] != val){
            res = 0;
            break;
        }
    }
    return res;
}

int main(void){
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {1,2,4,4,5,6,7,8,9,10};
    int arr3[10] = {1,2,4,8,5,6,7,8,9,10};
    int arr4[10] = {1,2,4,8,16,6,7,8,9,10};
    int arr5[10] = {1,2,4,8,16,32,7,8,9,10};
    int arr6[10] = {1,2,4,8,16,32,64,8,9,10};
    int arr7[10] = {1,2,4,8,16,32,64,128,9,10};
    int arr8[10] = {1,2,4,8,16,32,64,128,256,10};
    int arr9[10] = {1,2,4,8,16,32,64,128,256,512};

    int r = func(arr1, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr2, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr3, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr4, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr5, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr6, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr7, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr8, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    r = func(arr9, 10);
    printf("Resultado: %d, N Comparacoes: %d\n", r, NUM_COMP);

    return 0;
}