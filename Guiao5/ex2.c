#include <stdio.h>
#include <assert.h>

int NUM_COMPS;
int copias;

void func(int *arr, int *size){
    NUM_COMPS = 0;
    copias = 0;
    assert(*size>1);
    for (int i = 0; i < *size; i++){

        for (int h = i+1; h<*size; h++){

            NUM_COMPS++;
            if (arr[i] == arr[h] || arr[i]%arr[h]==0 || arr[h]%arr[i]==0){

                (*size)--;
                for (int j = h; j < *size; j++){
                    copias++;
                    arr[j]=arr[j+1];
                }
                h--;
            }
        }
    }
}

void pArr(int *arr, int *size){
    printf("{");
    
    for(int i = 0; i < *size-1;i++){
        printf("%d,",arr[i]);
    }
    printf("%d",arr[*size-1]);
    printf("}\n");
}

int main(void){
    int arr1[10] = {2, 2, 2, 3, 3, 4, 5, 8, 8, 9};
    int arr2[10] = {7, 8, 2, 2, 3, 3, 3, 8, 8, 9};
    int arr3[5] = {3, 5, 7, 11, 13};
    int arr4[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int size = 10;
    pArr(arr1, &size);
    func(arr1, &size);
    pArr(arr1, &size);
    printf("N comparacoes: %d, N copias: %d \n", NUM_COMPS, copias);

    size = 10;
    pArr(arr2, &size);
    func(arr2, &size);
    pArr(arr2, &size);
    printf("N comparacoes: %d, N copias: %d \n", NUM_COMPS, copias);

    size = 5;
    pArr(arr3, &size);
    func(arr3, &size);
    pArr(arr3, &size);
    printf("N comparacoes: %d, N copias: %d \n", NUM_COMPS, copias);

    size = 10;
    pArr(arr4, &size);
    func(arr4, &size);
    pArr(arr4, &size);
    printf("N comparacoes: %d, N copias: %d \n", NUM_COMPS, copias);

    return 0;
}