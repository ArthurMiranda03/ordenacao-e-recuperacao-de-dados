#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int selects(int *v, int n, int inicio){
  int im = inicio;
  for(int j = inicio+1;j<n;j++){
    if(v[j]<v[im]){
      im = j;
    }
  }
  return im;
}

void swap (int *v, int x, int y){
    int temp = v[x];
    v[x]=v[y];
    v[y]=temp;
}
void selection_sort(int *v, int n){
    for(int i=0; i < n-1; i++){
      int im = selects(v,n,i);
      if(im!=i){
        swap(v,im,i);
      }
    }
}
void printv(int *v, int n){
  for(int i=0;i<n;i++){
    printf("%d ",v[i]);
  }
}

int main() {
  int n = TAM;
  srand(time(NULL));
  int vetor[TAM];
  for(int i = 0; i < n; i++){
      vetor[i] = rand() % 10 + 1;
  }
  selection_sort(vetor,n);
  printv(vetor,n);
  return 0;
}