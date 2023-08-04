/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 07 - Alternativa)

    O código fornecido imprime uma sequência de números de 1 a 100 na tela, mas utiliza condições específicas para formatar a saída. No entanto, podemos torná-lo mais flexível e melhorar a lógica para formatar a saída de maneira mais eficiente.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o valor máximo da sequência de números a serem exibidos. O programa deve solicitar ao usuário que insira o valor máximo e, em seguida, usar um loop "for" para imprimir os números na tela, formatando a saída de forma que os números sejam exibidos em colunas.

    Dicas:

    1. Peça ao usuário que digite o valor máximo da sequência de números a serem exibidos.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável.

    3. Use um loop "for" para imprimir os números de 1 até o valor máximo especificado pelo usuário.

    4. Considere a utilização do operador de módulo `%` para identificar quando um número deve ser impresso em uma nova linha. Por exemplo, se o número for múltiplo de 10, ele deve ser impresso em uma nova linha, caso contrário, não precisa.

    5. Com base na lógica do item anterior, formate a saída para que os números sejam exibidos em colunas, com um espaçamento uniforme.

    Exemplo de saída do programa:

    ```
    Digite o valor máximo da sequência de números a serem exibidos: 25

    1   2   3   4   5   6   7   8   9  10
    11  12  13  14  15  16  17  18  19  20
    21  22  23  24  25
    ```

    ```
    Digite o valor máximo da sequência de números a serem exibidos: 15

    1   2   3   4   5   6   7   8   9  10
    11  12  13  14  15
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    
    for (i = 1; i < 101; i++){
        
        if (i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90) {
            printf ("%4d\n", i);
        } else {
            printf ("%4d",i);
        }
    }
    
    return 0;
} 