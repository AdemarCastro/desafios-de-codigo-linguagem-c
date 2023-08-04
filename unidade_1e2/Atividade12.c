/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 12)

    O código fornecido calcula o número de Fibonacci para uma determinada posição n da sequência. No entanto, podemos torná-lo mais interativo, permitindo que o usuário escolha entre calcular o número de Fibonacci ou exibir a sequência completa até a posição n.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário escolher entre calcular o número de Fibonacci para uma posição específica ou exibir a sequência completa até a posição n. O programa deve solicitar ao usuário que faça essa escolha e, em seguida, prosseguir de acordo com a opção selecionada.

    Dicas:

    1. Peça ao usuário que escolha entre as duas opções: calcular o número de Fibonacci para uma posição específica ou exibir a sequência completa até a posição n.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável para a escolha.

    3. Implemente uma estrutura de seleção (como um "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    4. Se o usuário escolher calcular o número de Fibonacci para uma posição específica, solicite a posição desejada e calcule o número de Fibonacci usando o código existente.

    5. Se o usuário escolher exibir a sequência completa até a posição n, use um loop para calcular e imprimir os números de Fibonacci de 1 até a posição n.

    Exemplo de saída do programa:

    ```
    Escolha uma opção:
    1 - Calcular o número de Fibonacci para uma posição específica
    2 - Exibir a sequência completa até a posição n

    Opção selecionada: 1
    Digite a posição desejada: 8
    Posição 8 da sequência de Fibonacci: 21
    ```

    ```
    Escolha uma opção:
    1 - Calcular o número de Fibonacci para uma posição específica
    2 - Exibir a sequência completa até a posição n

    Opção selecionada: 2
    Digite a posição n: 10
    Sequência de Fibonacci até a posição 10: 1 1 2 3 5 8 13 21 34 55
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    long int fibonacci(int n);
    int n;
    printf ("Escolha a posicao: ");
    scanf("%d", &n);
    printf("Posicao %d da sequencia de fibonnaci: %d", n, fibonacci(n));
}

long fibonacci(int n)
{
    int cont;
    long int x = 0, z = 1;
    
    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
    
    return 0;
} 