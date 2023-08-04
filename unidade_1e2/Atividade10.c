/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 10)

    O código fornecido imprime uma matriz diagonal com "1" na primeira e última colunas e "0" nas outras posições. Vamos deixar o código mais flexível, permitindo que o usuário defina o tamanho da matriz e escolha as colunas em que deseja colocar o valor "1".

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o tamanho da matriz (número de linhas e colunas) e escolher as colunas em que deseja colocar o valor "1". O programa deve solicitar ao usuário que insira o número de linhas e colunas da matriz, bem como as colunas onde ele deseja que o valor "1" seja colocado, e, em seguida, usar dois loops "for" para imprimir a matriz na tela.

    Dicas:

    1. Peça ao usuário que digite o número de linhas da matriz.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável para o número de linhas.

    3. Peça ao usuário que digite o número de colunas da matriz.

    4. Utilize a função `scanf()` novamente para receber a entrada do usuário e armazene o valor digitado em uma variável para o número de colunas.

    5. Peça ao usuário que escolha as colunas onde ele deseja colocar o valor "1". O usuário pode digitar várias colunas separadas por espaço, por exemplo: "1 3 5".

    6. Use dois loops "for" para percorrer as linhas e colunas da matriz e decida se o valor é da diagonal principal ou não com base nas colunas fornecidas pelo usuário.

    7. Imprima a matriz na tela com os valores fornecidos pelo usuário.

    Exemplo de saída do programa:

    ```
    Digite o número de linhas da matriz: 5
    Digite o número de colunas da matriz: 5
    Digite as colunas para colocar o valor "1": 1 5

    1 0 0 0 1
    0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 0
    1 0 0 0 1
    ```

    ```
    Digite o número de linhas da matriz: 4
    Digite o número de colunas da matriz: 6
    Digite as colunas para colocar o valor "1": 2 4 6

    0 1 0 1 0 1
    0 1 0 1 0 1
    0 1 0 1 0 1
    0 1 0 1 0 1
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5){
                printf ("1");
            } else {
                printf ("0");
            }
        }
        printf("\n");
    }
    
    
    return 0;
} 