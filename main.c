#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colaborador1.h"

/**
 * Imprime na tela a mensagem modificada pelo funcionario
 */
void dumpmsg(char* msg, char* title)
{
    printf("\n[ %s ]\n%s\n", title, msg);
}

/**
 * Main
 */
int main(void)
{
    printf("\n=== Teste colaborativo ===\n");

    char* dados = (char*) malloc(sizeof(char)*255);
    char* oquefaz = (char*) malloc(sizeof(char)*30);

    // -- colaborador 1 --
    printf("\n[ Colaborador 1 ]");
    colaborador1(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    free(dados);
    free(oquefaz);
    return 0;
}