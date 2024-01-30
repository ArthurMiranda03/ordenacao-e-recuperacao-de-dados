#include <stdio.h>


void intercala(int *v, int i1, int f1, int i2, int f2){
    int *parte_inicial = malloc(4 * sizeof(int));
    if (!firstHalf) {
    /* handle error */
    }

    int *parte_final = malloc(4 * sizeof(int));
    if (!secondHalf) {
    /* handle error */
    }

    memcpy(parte_inicial, v, 4 * sizeof(int));
    memcpy(parte_final, v + 4, 4 * sizeof(int));
    
    for(int i = 0 ; i < (sizeof(v)/sizeof(arr[0])); i++){
        if(parte_inicial[i] > parte_final[i]){
            int arr1[] = {};
            arr1[i] = v[i];
        }
        else{
            int arr2[] = {};
            arr2[i] = v[i];
        }
    }
}

void printArray(int A[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d", A[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1,3,5,7,0,2,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    intercala(arr,arr[0],arr[3],arr[4],arr[7]);
    printArray(arr,n);
    return 0;
}