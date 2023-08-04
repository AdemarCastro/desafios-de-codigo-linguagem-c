/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 05)

    O código fornecido é um loop "for" simples que imprime os números de 1 a 10, representando os dias de aula. No entanto, podemos torná-lo mais interessante ao adicionar algumas funcionalidades extras.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir a quantidade total de dias de aula que deseja exibir. O programa deve solicitar ao usuário que insira um valor inteiro e, em seguida, usar um loop "for" para imprimir os números dos dias de aula, desde o primeiro até o número fornecido pelo usuário.

    Dicas:

    1. Peça ao usuário que digite a quantidade de dias de aula que deseja exibir.

    2. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável.

    3. Use um loop "for" para imprimir os números dos dias de aula. O loop deve começar em 1 e continuar até o valor inserido pelo usuário.

    4. Considere a inclusão de uma validação de entrada para garantir que o usuário forneça um valor inteiro positivo para o número de dias de aula.

    Exemplo de saída do programa:

    ```
    Digite a quantidade de dias de aula que deseja exibir: 7

    1º dia de aula
    2º dia de aula
    3º dia de aula
    4º dia de aula
    5º dia de aula
    6º dia de aula
    7º dia de aula
    ```

    ```
    Digite a quantidade de dias de aula que deseja exibir: 3

    1º dia de aula
    2º dia de aula
    3º dia de aula
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int i;
    
    for (i=1;i<11;i++){ 
    printf("%d o dia de aula \n", i); 
    }    
    return 0;
}
