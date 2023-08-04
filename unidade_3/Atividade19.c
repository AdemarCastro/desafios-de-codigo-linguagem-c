/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 19)

    O código fornecido possui variáveis globais e locais. Vamos explorar a diferença entre esses dois tipos de variáveis e como elas afetam o escopo de uma variável dentro do código.

    Seu desafio é identificar e explicar as diferenças entre as variáveis globais e locais no código fornecido. Além disso, você deve explicar o conceito de escopo de uma variável e como ele é aplicado neste código.

    Dicas:

    1. Identifique as variáveis globais e locais no código.

    2. Explique o conceito de escopo de uma variável e como ele se relaciona com as variáveis globais e locais no código fornecido.

    3. Comente o código para explicar o que cada parte faz e inclua sua explicação sobre as variáveis globais e locais e o conceito de escopo.

    Exemplo de explicação:

    ```
    Neste código, temos três tipos de variáveis: variáveis globais, variáveis locais da função `main` e variáveis locais das funções `fun1` e `fun2`.

    - Variáveis Globais: A variável `vg` é uma variável global, declarada fora de qualquer função e acessível por todas as funções no código. Seu valor pode ser alterado em qualquer parte do código, e qualquer função pode acessar e modificar seu valor.

    - Variáveis Locais: As variáveis `vf1` e `vf2` são variáveis locais das funções `fun1` e `fun2`, respectivamente. Elas são declaradas dentro dessas funções e só podem ser acessadas por elas. Essas variáveis têm um escopo restrito apenas à função em que foram declaradas e não são visíveis para outras partes do código.

    - Escopo de uma Variável: O escopo de uma variável refere-se à região do programa onde a variável é válida e pode ser acessada. No caso das variáveis globais, seu escopo é o programa inteiro, enquanto as variáveis locais têm um escopo limitado à função em que foram declaradas. Isso significa que uma variável local não pode ser acessada ou modificada por outras funções, e ela não interfere com outras variáveis de mesmo nome declaradas em outras funções.

    Observação: No código fornecido, a variável `vm` é uma variável local da função `main`. Ela não é uma variável global, pois foi declarada dentro da função `main`, e não é visível para as funções `fun1` e `fun2`.
    ```

    Escreva uma explicação similar para as variáveis e o conceito de escopo no código fornecido. Isso ajudará a entender melhor o código e a prática de variáveis globais e locais. Boa sorte no desafio de explicação!

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vg = 2; /* Vari�vel Global */

int fun1 (int n1);
int fun2 (int n1);

int fun1 (int n1){

    int vf1; /* Vari�vel Local */
    vg = 3;
    return 1;

}

int fun2 (int n2){

    int vf2; /* Vari�vel Local */
    return 2;

}

int main()
{

    int vm = 1; /* Global do Problema */

    printf ("\n fun��o 1 = %d", fun1 (vm));

    printf ("\n fun��o 2 = %d", fun2 (vm));


    return 0;
}
