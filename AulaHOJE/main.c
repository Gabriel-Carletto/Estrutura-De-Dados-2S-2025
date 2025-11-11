#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "musica.h"

int main() {


    Item * D = criarItem("Aquarela", "Toquinho", 1983);
    Item * E = criarItem("Romaria", "Renato Teixeira", 1978);
    Item * F = criarItem("Eu nasci há dez mil anos atras", "Raul Seixas", 1976);
    Item * G = criarItem("Calice", "Chico Buarque e Gilberto Gil", 1978);
    Item * H = criarItem("Tempo Perdido", "Renato Russo", 1986);

    D->Anterior = NULL;
    D->Posterior = E;

    E->Anterior = D;
    E->Posterior = F;

    F->Anterior = E;
    F->Posterior = G;

    G->Anterior = F;
    G->Posterior = H;

    H->Anterior = G;
    H->Posterior = NULL;

    Item * Atual = E;
    Atual = Atual->Posterior;
    Atual = Atual->Posterior;
    Atual = Atual->Posterior;
    Atual = Atual->Anterior;



    



}