/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

   Atividade 22)

   O código atual realiza uma subtração entre os números 5 e 7 e, em seguida, exibe o resultado da subtração, que é -2. Agora, queremos adicionar uma nova funcionalidade ao programa.

   Seu desafio é criar uma nova função chamada `multiplicar` que receberá dois números como parâmetros e retornará o resultado da multiplicação desses dois números. Além disso, você deve criar uma função chamada `dividir` que receberá dois números como parâmetros e retornará o resultado da divisão do primeiro número pelo segundo número.

   Depois de criar as duas novas funções, você deve usar a função `multiplicar` para multiplicar os números 5 e 7 e, em seguida, usar a função `dividir` para dividir o resultado da multiplicação por 2. O resultado final deve ser exibido na tela.

   Dicas:

   1. Crie as duas novas funções `multiplicar` e `dividir` seguindo o modelo das funções `somar` e `subtrair` já fornecidas.

   2. Lembre-se de declarar os protótipos das novas funções acima da função `main` para que elas possam ser usadas corretamente.

   3. Utilize as novas funções para realizar a multiplicação e divisão conforme especificado no desafio.

   4. Teste o programa para garantir que as novas funcionalidades estejam funcionando corretamente.

   Exemplo de saída esperada:

   ```
   Resultado da multiplicação: 35.0
   Resultado da divisão: 17.5
   ```

   Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float valor = 0;

void somar(float num1, float num2, float *total);

void subtrair(float num1, float num2, float *total);

void exibirvalor(float total);

void somar(float num1, float num2, float *total)
{

   *total = num1 + num2;
}

void subtrair(float num1, float num2, float *total)
{

   *total = num1 - num2;
}

void exibirvalor(float total)
{

   valor = total;

   printf("%.1f", valor);
}

int main()
{

   subtrair(5, 7, &valor);

   exibirvalor(valor);

   return 0;
}