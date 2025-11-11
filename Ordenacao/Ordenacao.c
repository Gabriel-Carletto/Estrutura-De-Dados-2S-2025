#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// protótipos

void InsertionSort(int * V, int N); 
void ExibirVetor(int * V, int N);


//Funcao Principal

int main (){

    int Conjunto[] = {1, 9, 7, 8, 5, 2};

    int Tamanho = sizeof(Conjunto) / sizeof(int);

    InsertionSort(Conjunto, Tamanho);
    printf("\n Vetor Ordenado: \n");
    ExibirVetor(Conjunto, Tamanho);
}


// Implementacao das funcoes

void InsertionSort(int * V, int N){

    int Chave; // Elemento que será inserido na parte ordenada
    int i; // Posicao ( ou coordenada ) do elemento chave
    int j; // Posicao do elemento da "parte ordenada" que será comparada com a chave
    
    for(i = 1; i < N; i++) {

        Chave = V[i];
        j = i - 1;

        while (j >= 0 && V[j] > Chave){

            V[j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave; // Copiando o Chave no úlltimo lugar modificado

        V[j + 1] = Chave;
        ExibirVetor( V , N);
    }
}



void ExibirVetor(int * V, int N){

    int i;
    for(i = 0; i < N; i++)
    printf("%d ", V[i]);

}