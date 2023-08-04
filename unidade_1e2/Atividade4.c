/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 04)

    O código fornecido realiza a classificação de acordo com o sexo (masculino ou feminino) e a idade do usuário em categorias de competição (Infantil, Juvenil ou Adulto). No entanto, ele está usando apenas condições simples e não abrange todas as possibilidades.

    Seu desafio é implementar uma versão revisada deste código, que deve cobrir todas as faixas etárias e gêneros. O programa deve permitir que o usuário digite seu sexo e idade e, em seguida, classificá-lo corretamente em uma das seguintes categorias:

    - Masculino:
    - Infantil: Até 10 anos
    - Juvenil: De 11 a 17 anos
    - Adulto: Acima de 18 anos

    - Feminino:
    - Infantil: Até 10 anos
    - Juvenil: De 11 a 17 anos
    - Adulto: Acima de 18 anos

    Dicas:

    1. Peça ao usuário que digite o sexo usando as letras "m" para masculino e "f" para feminino.

    2. Após receber a entrada do usuário, solicite também que ele insira sua idade.

    3. Use estruturas condicionais para verificar o sexo e a idade do usuário e classificá-lo corretamente em uma das categorias especificadas acima.

    4. Considere a inclusão de uma validação de entrada para garantir que o usuário forneça valores válidos para o sexo (apenas "m" ou "f") e a idade (números inteiros positivos).

    Exemplo de saída do programa:

    ```
    Digite seu sexo (m para masculino ou f para feminino): m
    Digite a sua idade: 25

    Você foi classificado na categoria: Adulto Masculino.
    ```

    ```
    Digite seu sexo (m para masculino ou f para feminino): f
    Digite a sua idade: 14

    Você foi classificado na categoria: Juvenil Feminino.
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main(){
    
    char sexo, m, f;
    int idade;
    
    printf("Digite seu sexo, use 'm' para masculino e 'f' para feminino: ");
    scanf("%s", &sexo);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if((sexo == 'm') && (idade<15)) {
        printf("Infantil Masculion.");
    } else if((sexo == 'f') && (idade<15)) {
        printf("Infantil Feminino.");
    } else if((sexo == 'm') && (idade >=15 && idade < 18)) {
        printf("Juvenil Masculino.");
    } else if((sexo == 'f') && (idade >=15 && idade < 18)) {
        printf("Juvenil Feminino.");
    } else if((sexo == 'm') && (idade>18)) {
        printf("Adulto Masculino.");
    } else if((sexo == 'f') && (idade>18)) {
        printf("Adulto Feminino.");
    }
    return 0;
}
