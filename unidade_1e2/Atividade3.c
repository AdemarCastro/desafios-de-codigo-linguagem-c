/*  NOME: ADEMAR
    MATRÍCULA: 2022******
    TURMA: TADS 2022/1

    Atividade 03)

    O código fornecido realiza o cálculo do valor de ICMS (Imposto sobre Circulação de Mercadorias e Serviços) a ser pago nos estados do Amazonas e Pará com base no valor de um produto fornecido pelo usuário. No entanto, este código pode ser aprimorado para lidar com mais estados e diferentes alíquotas de ICMS.

    Seu desafio é implementar uma versão revisada deste código que permita ao usuário escolher o estado e digitar a alíquota de ICMS correspondente. O programa deve então calcular e exibir o valor de ICMS a ser pago com base na alíquota fornecida e no valor do produto informado pelo usuário.

    Dicas:

    1. Peça ao usuário para escolher o estado pelo qual ele deseja calcular o ICMS. Você pode fornecer opções numéricas (por exemplo, 1 para Amazonas, 2 para Pará etc.) ou usar strings para que o usuário insira o nome do estado.

    2. Após receber a entrada do usuário para o estado, solicite que ele insira a alíquota de ICMS correspondente. Lembre-se de usar o tipo de dado adequado para armazenar o valor da alíquota (por exemplo, `float`).

    3. Com base na alíquota e no valor do produto fornecido, calcule o valor de ICMS a ser pago e exiba-o na tela.

    4. Considere a inclusão de uma validação de entrada para garantir que o usuário forneça valores válidos para o estado e a alíquota.

    Exemplo de saída do programa:

    ```
    Escolha o estado para calcular o ICMS:
    1 - Amazonas
    2 - Pará
    3 - Outro Estado

    Digite o número correspondente ao estado: 2
    Digite a alíquota de ICMS para o estado do Pará: 17.5
    Qual o valor do produto?: 350.50

    O valor de ICMS a ser pago no estado do Pará será: 61.29
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int valor, imposto_AM, imposto_PR;
    printf("Qual o valor do produto?: ");
    scanf("%d", &valor);
    
    imposto_AM = valor * 0.18;
    imposto_PR = valor * 0.17;
    
    printf("\nO valor de ICMS a ser pago no Estado do Amazonas e Pará será: %d / %d", imposto_AM, imposto_PR);
    
    
    

return 0;
}