/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 13)

    O código fornecido calcula o fatorial de um número específico fornecido pelo usuário. Vamos tornar o programa mais interativo, permitindo que o usuário escolha entre calcular o fatorial de um número específico ou exibir a sequência completa de fatoriais até o número fornecido.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário escolher entre calcular o fatorial de um número específico ou exibir a sequência completa de fatoriais de 1 até o número fornecido. O programa deve solicitar ao usuário que faça essa escolha e, em seguida, prosseguir de acordo com a opção selecionada.

    Dicas:

    1. Peça ao usuário que escolha entre as duas opções: calcular o fatorial de um número específico ou exibir a sequência completa de fatoriais até o número fornecido.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável para a escolha.

    3. Implemente uma estrutura de seleção (como um "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    4. Se o usuário escolher calcular o fatorial de um número específico, solicite o número desejado e calcule o fatorial usando o código existente.

    5. Se o usuário escolher exibir a sequência completa de fatoriais, use um loop para calcular e imprimir os fatoriais de 1 até o número fornecido pelo usuário.

    Exemplo de saída do programa:

    ```
    Escolha uma opção:
    1 - Calcular o fatorial de um número específico
    2 - Exibir a sequência completa de fatoriais até um número n

    Opção selecionada: 1
    Digite o número para calcular o fatorial: 5
    Fatorial calculado de 5: 120
    ```

    ```
    Escolha uma opção:
    1 - Calcular o fatorial de um número específico
    2 - Exibir a sequência completa de fatoriais até um número n

    Opção selecionada: 2
    Digite o número n: 6
    Sequência de fatoriais até o número 6: 1 2 6 24 120 720
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

    int main()
{
    int fat, n;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;

    printf("\nFatorial calculado: %d", fat);


    
    return 0;
} 