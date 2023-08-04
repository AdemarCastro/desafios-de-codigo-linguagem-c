/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 18)

    O código fornecido é um programa simples que realiza operações aritméticas básicas (adição, subtração, multiplicação e divisão) entre dois números fornecidos pelo usuário. Vamos deixar o programa mais flexível, permitindo que o usuário escolha a operação aritmética que deseja realizar.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário escolher a operação aritmética que deseja realizar entre os dois números. O programa deve fornecer as seguintes opções:

    1. Soma (+): O usuário deve poder escolher somar os dois números fornecidos.

    2. Subtração (-): O usuário deve poder escolher subtrair o segundo número do primeiro.

    3. Multiplicação (*): O usuário deve poder escolher multiplicar os dois números.

    4. Divisão (/): O usuário deve poder escolher dividir o primeiro número pelo segundo.

    O programa deve solicitar ao usuário que escolha uma das quatro operações e, em seguida, realizar o cálculo de acordo com a opção selecionada.

    Dicas:

    1. Peça ao usuário que escolha entre as quatro opções de operações aritméticas.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor da escolha em uma variável.

    3. Implemente uma estrutura de seleção (como "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    4. Implemente funções para realizar cada uma das operações aritméticas (soma, subtração, multiplicação e divisão).

    5. Exiba o resultado da operação escolhida pelo usuário.

    Exemplo de saída do programa:

    ```
    Digite o 1º número: 5.5
    Digite o 2º número: 2.0

    Escolha uma operação:
    1 - Soma (+)
    2 - Subtração (-)
    3 - Multiplicação (*)
    4 - Divisão (/)

    Opção selecionada: 3
    Resultado da multiplicação: 5.5 * 2.0 = 11.0
    ```

    ```
    Digite o 1º número: 10
    Digite o 2º número: 3

    Escolha uma operação:
    1 - Soma (+)
    2 - Subtração (-)
    3 - Multiplicação (*)
    4 - Divisão (/)

    Opção selecionada: 2
    Resultado da subtração: 10 - 3 = 7
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

float soma (float n1, float n2);
float subtrai (float n1, float n2);
float mult (float n1, float n2);
float divi (float n1, float n2);

float soma (float n1, float n2){
    
    return n1 + n2;
    
}

float subtrai (float n1, float n2){
    
    return n1 - n2;
    
}

float mult (float n1, float n2){
    
    return n1 * n2;
    
}

float divi (float n1, float n2){
    
    return n1 / n2;
    
}


int main()
{
    
    float n1, n2;
    
    /* Coletando dados de n1 e n2 */
    
    printf ("Digite o 1º número: ");
    scanf ("%f", &n1);
    
    printf ("Digite o 2º número: ");
    scanf ("%f", &n2);
    
    /* Resultado das operações */
    
    printf ("\nResultado da soma entre %.2f e %.2f = %.2f", n1, n2, soma (n1, n2));
    
    printf ("\nResultado da subtrai entre %.2f e %.2f = %.2f", n1, n2, subtrai (n1, n2));

    printf ("\nResultado da multiplicação entre %.2f e %.2f = %.2f", n1, n2, mult (n1, n2));

    printf ("\nResultado da divisão entre %.2f e %.2f = %.2f", n1, n2, divi (n1, n2));


    return 0;
}
