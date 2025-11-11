#include <stdio.h>
#include <stdlib.h>

#define ERRO -1 // O elemento "Chave" na~o está no vetor

int PB(int * V, int N, int Chave); // pesquisa binária


int main(){

    int Numeros[] = {1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,21,22,23,24,25,26,27,28,29,30};
   
    int Tamanho = sizeof(Numeros) / sizeof(int);

    int Elemento = 12;

    int posicao = PB(Numeros, Tamanho, Elemento);

    if (posicao != ERRO) printf("A posicao eh %d. \n", posicao);

}

int PB(int * V, int N, int Chave){

    int Esquerda = 0;
    int Direita = N - 1;

    while(Esquerda <= Direita){
        int Meio = (Esquerda + Direita) / 2;
    }


}