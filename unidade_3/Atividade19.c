/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vg = 2; /* Vari�vel Global */

int fun1 (int n1);
int fun2 (int n1);

int fun1 (int n1){

    int vf1; /* Vari�vel Local */
    vg = 3;
    return 1;

}

int fun2 (int n2){

    int vf2; /* Vari�vel Local */
    return 2;

}

int main()
{

    int vm = 1; /* Global do Problema */

    printf ("\n fun��o 1 = %d", fun1 (vm));

    printf ("\n fun��o 2 = %d", fun2 (vm));


    return 0;
}
