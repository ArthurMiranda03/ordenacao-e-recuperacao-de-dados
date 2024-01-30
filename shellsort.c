#include <stdio.h>
#include <stdlib.h>

void shellsort(int *v,int n){
    int aux, i, j;
    int h = n/2;
    while (h > 0){
        i = h;
        while (i < n){
            //aux = v[i];
            j = i - h;
            while(j>=0){ //&& aux < v[j-h]){
                if(v[j+h]>=v[j])
                    break;
                else{
                    aux = v[j];
                    v[j] = v[j+h];
                    v[j+h] = aux;
                }
                j = j - h;
            }
            i++;
        }
        h = h/2;
    }
}

void printArray(int A[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(void){
    int v[8] = {43,6,10,18,3,5,1,50};
    int n = 8;
    printArray(v, n);
    shellsort(v, n);
    printArray(v, n);
    return 0;
}