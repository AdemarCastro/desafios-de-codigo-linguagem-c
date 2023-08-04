/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha = 123;
    int senha_digitada, counter = 0;
    
    printf ("Digite sua senha: ");
    scanf ("%d", &senha_digitada);
    
    while (senha != senha_digitada && counter < 5){
        printf ("Digite sua senha: ");
        scanf ("%d", &senha_digitada);
        counter++;
    }
    if (counter < 5 && senha == senha_digitada){
            printf ("Acesso autorizado!");
        } else{
            printf ("Acesso bloqueado!");
        };
    return 0;
} 