/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 07)

    O código fornecido utiliza um loop "while" para imprimir sequências de números de 1 a 100 em grupos de 10, ou seja, de 1 a 10, de 11 a 20, de 21 a 30, e assim por diante. No entanto, podemos tornar o programa mais interessante permitindo que o usuário defina o tamanho do grupo de números.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o tamanho do grupo de números a serem exibidos. O programa deve solicitar ao usuário que insira o tamanho do grupo e, em seguida, usar um loop "while" para imprimir os números na tela em grupos do tamanho especificado pelo usuário.

    Dicas:

    1. Peça ao usuário que digite o tamanho do grupo de números a serem exibidos.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável.

    3. Use um loop "while" para imprimir os números de 1 até o valor máximo especificado (100) em grupos do tamanho informado pelo usuário.

    4. Com base no tamanho do grupo, formate a saída para que os números sejam exibidos em colunas, com um espaçamento uniforme.

    Exemplo de saída do programa:

    ```
    Digite o tamanho do grupo de números a serem exibidos: 5

    1    2    3    4    5
    6    7    8    9   10
    11   12   13   14   15
    16   17   18   19   20
    21   22   23   24   25
    ...
    ```

    ```
    Digite o tamanho do grupo de números a serem exibidos: 8

    1    2    3    4    5    6    7    8
    9   10   11   12   13   14   15   16
    17   18   19   20   21   22   23   24
    25   26   27   28   29   30   31   32
    ...
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main(){
    int num = 1;

    printf("\n");

    if (num > 0  && num < 100)
        while (num > 0 && num < 101) {
            printf("%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d \n", num, num + 1, num + 2, num + 3, num + 4, num + 5, num + 6, num + 7, num + 8, num + 9);
            num+=10; 
        }
    
    
    return 0;
} 