/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 21)

    O código fornecido é um programa que calcula o valor do pagamento de um salário após receber um prêmio. A função `aumenta_salario` recebe o valor do prêmio e o endereço de memória da variável que armazena o valor do pagamento do salário. A função aumenta o salário somando o prêmio ao valor do salário mínimo e atualiza a variável `total_pagamento_salario` no `main` com o novo valor.

    Seu desafio é adicionar uma nova funcionalidade ao programa. Além de calcular o valor do pagamento do salário com o prêmio, queremos que o programa também calcule e exiba o valor do aumento salarial percentual em relação ao salário original.

    Dicas:

    1. Para calcular o aumento salarial percentual, você precisa comparar o valor do salário original (antes do prêmio) com o valor do salário atualizado (após o prêmio).

    2. O aumento salarial percentual pode ser calculado pela fórmula: `(valor_salario_atual - valor_salario_original) / valor_salario_original * 100`.

    3. Crie uma nova variável para armazenar o valor do salário original antes do aumento.

    4. Após calcular o valor do pagamento do salário com o prêmio, calcule o aumento salarial percentual usando a fórmula e exiba-o junto com o valor para pagamento.

    Exemplo de saída esperada:

    ```
    Valor do pagamento atual = 0.00

    Valor para pagamento = 1500.00
    Aumento salarial percentual: 23.76%

    Valor do pagamento atual - após aumento = 1500.00
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float salario_minimo = 1212;
 
 void aumenta_salario (float premio, float *valor_para_pagamento);
 
 void aumenta_salario (float premio, float *valor_para_pagamento){
        
        float valor_premio = 0, valor_pagamento = 0;
        
        valor_premio = premio;
        
        valor_pagamento = salario_minimo + valor_premio;
        
        *valor_para_pagamento = valor_pagamento;
        
        printf ("\nValor para pagamento = %.2f\n", *valor_para_pagamento);
        
    }
 
int main()
{
    
    setlocale (LC_ALL, "Portuguese");
    
    float premio = 288;
    float total_pagamento_salario = 0; // Valor inicial.
    
    printf ("\nValor do pagamento atual = %.2f\n", total_pagamento_salario);
    
    aumenta_salario (premio, &total_pagamento_salario);
    
    printf ("\nValor do pagamento atual - após aumento = %.2f\n", total_pagamento_salario);
    
    
    
    
    
    return 0;
}