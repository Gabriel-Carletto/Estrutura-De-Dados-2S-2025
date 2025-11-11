#include <stdio.h>
#include <stdlib.h>

typedef struct Item {

    int Chave;
    struct Item * Proximo;

} Item;

int main(int argc, char * argv){

    Item * A = (Item *) malloc (sizeof(Item));   

    A->Chave = 17;
    A->Proximo = NULL;

    Item * B = (Item *) malloc (sizeof(Item));   

    B->Chave = 29;
    B->Proximo = NULL;

    Item * C = (Item *) malloc (sizeof(Item));   

    C->Chave = 41;
    C->Proximo = NULL;

    Item * D = (Item *) malloc (sizeof(Item));   

    D->Chave = 97;
    D->Proximo = NULL;

   

//encadeando


A->Proximo = C;
C->Proximo = B;
B->Proximo = D;

printf("%d\n", A->Chave);
printf("%d\n", A->Proximo->Chave);
printf("%d\n", C->Proximo->Proximo->Chave);

 return 0;
}
 