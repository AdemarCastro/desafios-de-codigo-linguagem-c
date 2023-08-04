/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 09)

    O código fornecido imprime uma matriz de coordenadas 10x20. Cada elemento da matriz é representado por um par de números, onde o primeiro número indica a linha e o segundo número indica a coluna da matriz. Vamos tornar o código mais interessante permitindo que o usuário defina o tamanho da matriz e o formato das coordenadas.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o tamanho da matriz (número de linhas e colunas) e escolher o formato das coordenadas. O programa deve solicitar ao usuário que insira o número de linhas e colunas da matriz, bem como o formato desejado para as coordenadas (por exemplo, "(linha,coluna)" ou apenas "linha,coluna"), e, em seguida, usar dois loops "for" para imprimir a matriz na tela.

    Dicas:

    1. Peça ao usuário que digite o número de linhas da matriz.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável para o número de linhas.

    3. Peça ao usuário que digite o número de colunas da matriz.

    4. Utilize a função `scanf()` novamente para receber a entrada do usuário e armazene o valor digitado em uma variável para o número de colunas.

    5. Peça ao usuário que escolha o formato desejado para as coordenadas (por exemplo, "(linha,coluna)" ou apenas "linha,coluna").

    6. Use dois loops "for" para percorrer as linhas e colunas da matriz e imprima as coordenadas no formato especificado pelo usuário.

    Exemplo de saída do programa:

    ```
    Digite o número de linhas da matriz: 3
    Digite o número de colunas da matriz: 4
    Escolha o formato para as coordenadas (1 para "(linha,coluna)" ou 2 para "linha,coluna"): 1

        (1,1)    (1,2)    (1,3)    (1,4)    (1,5)    (1,6)    (1,7)    (1,8)    (1,9)    (1,10)    (1,11)    (1,12)    (1,13)    (1,14)    (1,15)    (1,16)    (1,17)    (1,18)    (1,19)    (1,20)
        (2,1)    (2,2)    (2,3)    (2,4)    (2,5)    (2,6)    (2,7)    (2,8)    (2,9)    (2,10)    (2,11)    (2,12)    (2,13)    (2,14)    (2,15)    (2,16)    (2,17)    (2,18)    (2,19)    (2,20)
        (3,1)    (3,2)    (3,3)    (3,4)    (3,5)    (3,6)    (3,7)    (3,8)    (3,9)    (3,10)    (3,11)    (3,12)    (3,13)    (3,14)    (3,15)    (3,16)    (3,17)    (3,18)    (3,19)    (3,20)
    ```

    ```
    Digite o número de linhas da matriz: 2
    Digite o número de colunas da matriz: 3
    Escolha o formato para as coordenadas (1 para "(linha,coluna)" ou 2 para "linha,coluna"): 2

        1,1    1,2    1,3    1,4    1,5    1,6
        2,1    2,2    2,3    2,4    2,5    2,6
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    
    for (i = 0; i <= 10; i++){
        for (j = 0; j < 20; j++){
            printf ("\t(%d,%d)", i+1, j+1);
        }
        printf("\n");
    }
    
    
    return 0;
} 