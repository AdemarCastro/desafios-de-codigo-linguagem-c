/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 17)

    O código fornecido é um programa simples para registrar itens em uma comanda e calcular o valor total. Vamos aprimorá-lo, permitindo que o usuário registre vários itens em diferentes comandas e também calcule o valor total de cada comanda individualmente.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário registrar vários itens em diferentes comandas e também calcule o valor total de cada comanda individualmente. O programa deve fornecer as seguintes opções:

    1. Adicionar item à comanda: O usuário deve poder adicionar o nome do produto, a quantidade e o valor por unidade para cada item na comanda.

    2. Fechar comanda: O usuário pode fechar a comanda atual e calcular o valor total.

    3. Sair: O usuário pode sair do programa.

    Ao fechar a comanda, o programa deve exibir o nome de cada item, sua quantidade, valor unitário e o valor total da comanda. Em seguida, o programa deve permitir que o usuário inicie uma nova comanda.

    Dicas:

    1. Use loops "while" aninhados para permitir ao usuário registrar vários itens em cada comanda e também registrar várias comandas.

    2. Utilize arrays ou outras estruturas de dados para armazenar os detalhes de cada item da comanda (nome do produto, quantidade e valor por unidade).

    3. Use um array ou variável para armazenar o valor total da comanda atual.

    4. Implemente uma estrutura de seleção (como "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    5. Quando o usuário escolher fechar a comanda, exiba os detalhes de cada item registrado na comanda e o valor total.

    Exemplo de saída do programa:

    ```
    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Adicionar item à comanda
    2 - Fechar comanda
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 1
    Digite o nome do produto: Maçã
    Quantas unidades?: 5
    Qual o valor de cada unidade?: 2.50

    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Adicionar item à comanda
    2 - Fechar comanda
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 1
    Digite o nome do produto: Pão
    Quantas unidades?: 10
    Qual o valor de cada unidade?: 1.20

    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Adicionar item à comanda
    2 - Fechar comanda
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 2

    Comanda 1:
    Item: Maçã
    Quantidade: 5
    Valor unitário: R$ 2.50
    Valor total: R$ 12.50

    Item: Pão
    Quantidade: 10
    Valor unitário: R$ 1.20
    Valor total: R$ 12.00

    Valor total da comanda: R$ 24.50

    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Adicionar item à comanda
    2 - Fechar comanda
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 3

    Você saiu.
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int  i, valor, quantidade;
    char produto;
    float preco, total;
    
    while (valor != 3){
        
    printf ("------------------------------------------------------------\n");
    printf ("Digite um dos números para acessar as opções.\n");
    printf ("1 - Declare o nome do produto, quantidade e valor por unidade.\n");
    printf ("2 - Fechar a comanda.\n");
    printf ("3 - Sair.\n");
    printf ("------------------------------------------------------------\n");
        
        printf ("Digite um número de 1 a 3 para acessar o menu: ");
        scanf ("%d", &valor);
        
        switch (valor){
            
            case 1:
            
            printf ("Digite o nome do produto: ");
            scanf ("%s", &produto);
            
            printf ("Quantas unidades?: ");
            scanf ("%d", &quantidade);
            
            printf ("Qual o valor de cada unidade?: ");
            scanf ("%f", &preco);
            
            total = total + (quantidade*preco);
            
            
            break;
            
            case 2:
            printf ("\nValor total da comanda: R$%.2f\n", total);
            break;
            
            case 3:
            printf ("Você saiu.\n");
            break;
            
            default:
            printf ("\nTente de novo.\n");
            break;
        }
    }
    

    return 0;
}
