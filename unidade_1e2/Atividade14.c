/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 14)

    O código fornecido calcula a soma de dois números fornecidos pelo usuário usando apenas o operador de adição "+". Vamos deixar o programa mais interessante, permitindo que o usuário escolha qual operação aritmética deseja realizar (adição, subtração, multiplicação ou divisão) e exibir o resultado da operação escolhida.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário escolher qual operação aritmética deseja realizar. O programa deve solicitar ao usuário que escolha entre as quatro opções (adição, subtração, multiplicação ou divisão) e, em seguida, prosseguir de acordo com a opção selecionada.

    Dicas:

    1. Peça ao usuário que escolha entre as quatro opções de operações aritméticas: adição, subtração, multiplicação ou divisão.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável para a escolha.

    3. Implemente uma estrutura de seleção (como um "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    4. Se o usuário escolher adição, solicite os dois números e calcule a soma usando o código existente.

    5. Se o usuário escolher subtração, solicite os dois números e calcule a diferença.

    6. Se o usuário escolher multiplicação, solicite os dois números e calcule o produto.

    7. Se o usuário escolher divisão, solicite os dois números e calcule o quociente.

    8. Exiba o resultado da operação escolhida.

    Exemplo de saída do programa:

    ```
    Escolha uma operação:
    1 - Adição
    2 - Subtração
    3 - Multiplicação
    4 - Divisão

    Opção selecionada: 1
    Digite o primeiro número: 5
    Digite o segundo número: 3
    Resultado da adição: 5 + 3 = 8
    ```

    ```
    Escolha uma operação:
    1 - Adição
    2 - Subtração
    3 - Multiplicação
    4 - Divisão

    Opção selecionada: 3
    Digite o primeiro número: 4
    Digite o segundo número: 7
    Resultado da multiplicação: 4 * 7 = 28
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

    int main()
{

int num1, num2, n1, n2, soma = 0, i = 0;

printf("Digite o primeiro numero: ");

scanf(" %d", &n1);

printf("Digite o segundo numero: ");

scanf(" %d", &n2);

if(n1 < n2){

num1 = n1;

num2 = n2;

}

else{

num1 = n2;

num2 = n1;

}

printf("Soma: ");

while (i != num1){

soma = soma + num2;

printf("+ %d ",num2);

i = i + 1;

}

printf("= %d", soma);

return 0;

}