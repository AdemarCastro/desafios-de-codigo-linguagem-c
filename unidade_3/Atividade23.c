/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 23)

    O desafio é modificar a função `tabuada` para incluir a possibilidade de exibir a tabuada de multiplicação de mais de um valor. Atualmente, a função permite que o usuário insira apenas um valor e exibe a tabuada desse valor. Queremos que o usuário possa inserir vários valores separados por vírgula e, em seguida, a função exibirá as tabuadas de multiplicação para cada um desses valores.

    Dicas:

    1. Para permitir que o usuário insira vários valores separados por vírgula, você pode usar a função `scanf` com o formato `"%d,%d,%d"` (ou `"%d, %d, %d"`) para ler vários valores inteiros.

    2. Você pode usar a função `strtok` da biblioteca `string.h` para dividir a string de entrada em valores separados e, em seguida, converter cada valor em um inteiro.

    3. Em vez de exibir a tabuada de um único valor, você precisará modificar a função `tabuada` para lidar com vários valores e exibir a tabuada de multiplicação para cada um deles.

    Exemplo de saída esperada:

    ```
    Digite um operador soma, subtração, multiplicação ou divisão: *
    Digite os valores para a tabuada (separados por vírgula): 3, 5, 7

    MULTIPLICAÇÃO
    Tabuada de 3:
    3 * 1 = 3
    3 * 2 = 6
    3 * 3 = 9
    ...
    3 * 10 = 30

    Tabuada de 5:
    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    ...
    5 * 10 = 50

    Tabuada de 7:
    7 * 1 = 7
    7 * 2 = 14
    7 * 3 = 21
    ...
    7 * 10 = 70
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Declarações

void tabuada (int valor, char operador);

// Algoritmo

void tabuada (int valor, char operador){
    
    int i;
    
    switch (operador){
        
        int resultado, i;
        
        case '+':
            
            printf ("\nOperador de SOMA do valor %d\n\n", valor);
            
            for (i = 1; i <= 10; i++){
                
                resultado = i + valor;
                
                printf ("%d + %d = %d\n", i, valor, resultado);
                
            }    
            
        break;
        
        case '-':
            
            printf ("\nOperador de SUBTRAÇÃO do valor %d\n\n", valor);
            
            for (i = valor; i <= (valor + 10); i++){
                
                resultado = i - valor;
                
                printf ("%d - %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
        case '*':
            
            printf ("\nOperador de MULTIPLICAÇÃO do valor %d\n\n", valor);
            
            for (i = 1; i <= 10; i++){
                
                resultado = i * valor;
                
                printf ("%d * %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
        case '/':
            
            printf ("\nOperador de SUBTRAÇÃO do valor %d\n\n", valor);
            
            for (i = valor; i <= (valor * 10) ; i += valor){
                
                resultado = i / valor;
                
                printf ("%d / %d = %d\n", i, valor, resultado);
                
            }
            
        break;
        
    }
    
}
    
int main(){
    
    // Variáveis do Algoritmo
    
    int valor, i;
    char operador;
    
    printf("\nDigite um operador soma, subtração, multiplicação ou divisão: ");
    scanf ("%c", &operador);
    
    printf ("\nDigite um número de 1 a 10: ");
    scanf ("%d", &valor);
    
    if (operador=='+'){
        
        printf("\nSOMANDO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='-'){
        
        printf("\nSUBTRAINDO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='*'){
        
        printf("\nMULTIPLICAÇÃO\n");
        
        tabuada (valor, operador);
        
    } else if(operador=='/'){
        
        printf("\nDIVISÃO\n");
        
        tabuada (valor, operador);
        
    }
    
    return 0;
}
