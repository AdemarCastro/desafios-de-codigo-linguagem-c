/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 20)

    O código fornecido é um programa que realiza operações aritméticas básicas (soma, subtração, multiplicação e divisão) entre dois números reais fornecidos pelo usuário. No entanto, a implementação atual da opção 3, "Soma sucessiva entre dois números reais", não está correta.

    Seu desafio é corrigir a implementação da opção 3, de modo que a soma sucessiva entre os dois números seja calculada corretamente. A opção 3 deve usar a função `multsomas` já fornecida para calcular a soma sucessiva corretamente e exibi-la ao usuário.

    Dicas:

    1. A função `multsomas` já está implementada e realiza a soma sucessiva corretamente, portanto, você não precisa alterá-la.

    2. Ao exibir a soma sucessiva na opção 3, use a função `multsomas` corretamente e passe os valores corretos de `n1` e `n2`.

    3. Corrija qualquer erro ou loop infinito que possa estar ocorrendo na implementação atual da opção 3.

    4. Teste o programa após a correção para garantir que todas as opções funcionem corretamente.

    Exemplo de saída corrigida do programa:

    ```
    ---------------------------------------------------------------
    Selecione uma das opções abaixo.
    1 - Somar dois números reais.
    2 - Subtrair dois números reais.
    3 - Soma sucessiva entre dois números reais.
    4 - Dividir dois números reais.
    5 - Sair.
    ---------------------------------------------------------------

    Digite um número de 1 a 5 para acessar as opções do menu acima: 3

    Digite o 1º número: 5.5

    Digite o 2º número: 3

    Resultado da soma sucessiva entre 5.50 e 3.00 é: 5.50 + 5.50 + 5.50 = 16.50
    ```

    ```
    ---------------------------------------------------------------
    Selecione uma das opções abaixo.
    1 - Somar dois números reais.
    2 - Subtrair dois números reais.
    3 - Soma sucessiva entre dois números reais.
    4 - Dividir dois números reais.
    5 - Sair.
    ---------------------------------------------------------------

    Digite um número de 1 a 5 para acessar as opções do menu acima: 5

    Você saiu.
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de correção!

*******************************************************************************/
#include <stdio.h>

float somarnumero (float n1, float n2);
float subtrai (float n1, float n2);
float multsomas (float n1, float n2);
float divi (float n1, float n2);

float somarnumero (float n1, float n2){
    
    return n1 + n2;
    
}

float subtrai (float n1, float n2){
    
    return n1 - n2;
    
}

float multsomas (float n1, float n2){
    
    float soma, valor;
    soma = 0;
    
    for (valor = 1; valor != n2; valor ++){
        
        soma = somarnumero (n1, soma);
        
    }
    
     return n1 + soma;
    
}

float divi (float n1, float n2){
    
    return n1 / n2;
    
}


int main()
{
    
    float n1, n2, i;
    
    /* Variáveis do Menu */
    int valor1;
    
    while (valor1 != 5){
        
        printf ("\n---------------------------------------------------------------\n");
        printf ("Selecione uma das opções abaixo.\n");
        printf ("1 - Somar dois números reais.\n");
        printf ("2 - Subtrair dois números reais.\n");
        printf ("3 - Multiplicar dois números reais.\n");
        printf ("4 - Dividir dois números reais.\n");
        printf ("5 - Sair.\n");
        printf ("---------------------------------------------------------------\n");
        
        printf ("\nDigite um número de 1 a 5 para acessar as opções do menu acima: ");
        scanf ("%d", &valor1);

    switch (valor1){
        
        case 1: /* Somar dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da soma entre %.2f e %.2f = %.2f", n1, n2, somarnumero (n1, n2));
        
        break;
        
        case 2: /* Subtrair dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da subtrai entre %.2f e %.2f = %.2f", n1, n2, subtrai (n1, n2));
        
        break;
        
        case 3: /* Soma sucessiva entre dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da soma sucessiva entre %.2f e %.2f é:", n1, n2);
            
            while (i != n2){
                
                printf (" + %.2f", n1);
                
                i = i + 1;
                
            }
            
            printf (" = %.2f", multsomas (n1, n2));
        
        break;
        
        case 4: /* Divisão entre dois números reais */
        
            /* Coletando dados de n1 e n2 */
    
            printf ("\nDigite o 1º número: ");
            scanf ("%f", &n1);
            
            printf ("\nDigite o 2º número: ");
            scanf ("%f", &n2);
            
            printf ("\nResultado da divisão entre %.2f e %.2f = %.2f", n1, n2, divi (n1, n2));
        
        break;
        
        case 5:
        
        printf ("\nVocê saiu.");
        
        break;
        
        default:
        
        printf ("\nTente novamente.");
        
        break;
        
    }

}
    return 0;
}