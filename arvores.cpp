#include <iostream>

class No{
    public:
        int info;
        No* FE;
        No* FD;

    static No* Cria_No(int info){
        No* novo = new No();
        if(novo!=NULL){
            novo->info=info;
            novo->FE=NULL;
            novo->FD=NULL;
        }
        return novo;
    }
}

class Arv{
    public:
        No* raiz;
    
    bool inserir(int info){
        if(raiz==NULL){
            this->raiz=No.Cria_No(info);
            return(raiz!=NULL);
        }
    }
}
