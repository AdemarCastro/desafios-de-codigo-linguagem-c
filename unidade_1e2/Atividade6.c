/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 06)

    O código fornecido contém dois loops "for" que imprimem números na tela. No entanto, podemos torná-lo mais flexível e interessante, permitindo que o usuário escolha o intervalo de números a serem exibidos.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir o início e o fim do intervalo de números que deseja exibir. O programa deve solicitar ao usuário que insira os valores para o início e o fim do intervalo e, em seguida, usar os loops "for" para imprimir os números no intervalo especificado pelo usuário.

    Dicas:

    1. Peça ao usuário que digite o valor inicial (início do intervalo) e o valor final (fim do intervalo) que deseja exibir.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene os valores digitados em variáveis separadas para o início e o fim do intervalo.

    3. Use um loop "for" para imprimir os números no intervalo especificado pelo usuário. O primeiro loop deve começar no valor inicial e continuar até o valor final, ambos inclusivos.

    4. Considere a inclusão de uma validação de entrada para garantir que o usuário forneça valores inteiros válidos para o início e o fim do intervalo.

    Exemplo de saída do programa:

    ```
    Digite o valor inicial do intervalo: 5
    Digite o valor final do intervalo: 12

    5
    6
    7
    8
    9
    10
    11
    12
    ```

    ```
    Digite o valor inicial do intervalo: 0
    Digite o valor final do intervalo: 3

    0
    1
    2
    3
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main(){
    int i, a;
    
    for(a=1; a<10; a++){
        printf("\n%d\n", a);
    }
    
    for(i=10; i<21; i++){
        printf("\n%d\n", i);
    }
    return 0;
}
