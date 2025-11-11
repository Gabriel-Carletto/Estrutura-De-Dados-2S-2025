#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    char Argc1 = atoi(argv[1]);

        FILE* FP;
    FP = fopen("Texto.txt" , "a");

    if (FP == NULL){
        printf("Erro: Arquivo que foi executado e inexixtente\n");
        exit(1);
    }

    fprintf(FP, "%i" ,Argc1);
    fclose(FP);

    return 0;
}