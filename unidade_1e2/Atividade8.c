/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 08)

    O código fornecido imprime uma matriz 10x10 onde todos os elementos da diagonal principal são iguais a 1 e todos os outros elementos são iguais a 0. Vamos deixar o código mais flexível, permitindo que o usuário defina o tamanho da matriz e os valores para a diagonal principal.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o tamanho da matriz (número de linhas e colunas) e os valores que deseja atribuir à diagonal principal. O programa deve solicitar ao usuário que insira o tamanho da matriz e os valores para a diagonal principal, e, em seguida, usar dois loops "for" para imprimir a matriz na tela.

    Dicas:

    1. Peça ao usuário que digite o tamanho da matriz (número de linhas e colunas).

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene os valores digitados em variáveis separadas para o número de linhas e colunas.

    3. Peça ao usuário que insira os valores que deseja atribuir à diagonal principal da matriz.

    4. Use dois loops "for" para percorrer as linhas e colunas da matriz e, com base nas posições, decida se o valor é da diagonal principal ou não.

    5. Imprima a matriz na tela com os valores fornecidos pelo usuário.

    Exemplo de saída do programa:

    ```
    Digite o número de linhas da matriz: 4
    Digite o número de colunas da matriz: 4
    Digite o valor para a diagonal principal: 7

    7 0 0 0
    0 7 0 0
    0 0 7 0
    0 0 0 7
    ```

    ```
    Digite o número de linhas da matriz: 3
    Digite o número de colunas da matriz: 3
    Digite o valor para a diagonal principal: 3

    3 0 0
    0 3 0
    0 0 3
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    
    for (i = 1; i <= 10; i++){
        for (j = 1; j <= 10; j++)
        {
            if (i == j){
                printf ("1");
            } else {
                printf ("0");
            }
        }
        printf("\n");
    }
    
    
    return 0;
} 