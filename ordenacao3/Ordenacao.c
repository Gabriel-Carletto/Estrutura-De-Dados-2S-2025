#include <stdio.h>
#include <time.h>

void TrocarElemento(int * A, int * B);

int main() {


    int X = 25;
    int Y = 37;

    TrocarElemento(&X, &Y);
}

void TrocarElemento(int * A, int * B){


 //Obs: A e B sao ponteiros (Guardam enderecos de memoria)

 int temp = *A; // temp recebe o valor apontado por a
 *A = *B; // o valor apontado por a passa a ser o valor apontado por b
 *B = temp; // p valor apontado por b recebe temp (Valor apontado por a)

}