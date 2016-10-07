#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colaboradores.h"

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

    char* dados = (char*) malloc(sizeof(char)*512);
    char* oquefaz = (char*) malloc(sizeof(char)*30);

    strcpy(dados, "O que temos que ter sempre em mente é que a constante divulgação das informações acarreta um processo de reformulação e modernização das formas de ação. Evidentemente, a complexidade dos estudos efetuados pode nos levar a considerar a reestruturação das praças.");

    // -- colaborador 1 --
    printf("\n[ Colaborador 1 ]");
    colaborador1(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 2 --
    printf("\n[ Colaborador 2 ]");
    colaborador2(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 3 --
    printf("\n[ Colaborador 3 ]");
    colaborador3(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 4 --
    printf("\n[ Colaborador 4 ]");
    colaborador4(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 5 --
    printf("\n[ Colaborador 5 ]");
    colaborador5(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 6 --
    printf("\n[ Colaborador 6 ]");
    colaborador6(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 7 --
    printf("\n[ Colaborador 7 ]");
    colaborador7(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 8 --
    printf("\n[ Colaborador 8 ]");
    colaborador8(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 9 --
    printf("\n[ Colaborador 9 ]");
    colaborador9(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 10 --
    printf("\n[ Colaborador 10 ]");
    colaborador10(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 11 --
    printf("\n[ Colaborador 11 ]");
    colaborador11(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 12 --
    printf("\n[ Colaborador 12 ]");
    colaborador12(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 13 --
    printf("\n[ Colaborador 13 ]");
    colaborador13(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 14 --
    printf("\n[ Colaborador 14 ]");
    colaborador14(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    // -- colaborador 15 --
    printf("\n[ Colaborador 15 ]");
    colaborador15(dados, oquefaz);
    printf("\n%s: %s\n", oquefaz, dados);

    free(dados);
    free(oquefaz);
    return 0;
}