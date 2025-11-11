#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50000

// protótipos

void InsertionSort(int * V, int N); 
void ExibirVetor(int * V, int N);


//Funcao Principal

int main (){

    int Conjunto[TAMANHO];

    int Tamanho = sizeof(Conjunto) / sizeof(int);
    srand(time(NULL));
    for(int i = 0; i < TAMANHO; i++) Conjunto[i] = rand() % 1000;

    clock_t T0 = clock();
    InsertionSort(Conjunto, TAMANHO);
    clock_t TF = clock();

    printf("Tempo De CPU: %f\n", (double)(TF - T0))/CLOCKS_PER_SEC;

    printf("\n Vetor Ordenado: \n");
    ExibirVetor(Conjunto, TAMANHO);
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