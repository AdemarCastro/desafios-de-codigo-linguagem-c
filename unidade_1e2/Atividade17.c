/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int  i, valor, quantidade;
    char produto;
    float preco, total;
    
    while (valor != 3){
        
    printf ("------------------------------------------------------------\n");
    printf ("Digite um dos números para acessar as opções.\n");
    printf ("1 - Declare o nome do produto, quantidade e valor por unidade.\n");
    printf ("2 - Fechar a comanda.\n");
    printf ("3 - Sair.\n");
    printf ("------------------------------------------------------------\n");
        
        printf ("Digite um número de 1 a 3 para acessar o menu: ");
        scanf ("%d", &valor);
        
        switch (valor){
            
            case 1:
            
            printf ("Digite o nome do produto: ");
            scanf ("%s", &produto);
            
            printf ("Quantas unidades?: ");
            scanf ("%d", &quantidade);
            
            printf ("Qual o valor de cada unidade?: ");
            scanf ("%f", &preco);
            
            total = total + (quantidade*preco);
            
            
            break;
            
            case 2:
            printf ("\nValor total da comanda: R$%.2f\n", total);
            break;
            
            case 3:
            printf ("Você saiu.\n");
            break;
            
            default:
            printf ("\nTente de novo.\n");
            break;
        }
    }
    

    return 0;
}
