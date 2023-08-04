/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 11)

    O código fornecido solicita ao usuário que digite uma senha e compara a senha digitada com uma senha pré-definida (123). O usuário tem até 5 tentativas para digitar a senha correta. Vamos aprimorar o programa, permitindo que o usuário defina sua própria senha e também defina o número máximo de tentativas permitidas.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário definir sua própria senha e o número máximo de tentativas permitidas para digitar a senha correta. O programa deve solicitar ao usuário que insira sua senha e também o número máximo de tentativas. Em seguida, use um loop "while" para verificar se a senha digitada é correta e contabilizar o número de tentativas. Quando a senha estiver correta ou o número máximo de tentativas for alcançado, o programa deve informar se o acesso foi autorizado ou bloqueado.

    Dicas:

    1. Peça ao usuário que defina sua senha. Utilize a função `scanf()` para receber a entrada do usuário e armazene o valor digitado em uma variável.

    2. Peça ao usuário que defina o número máximo de tentativas permitidas para digitar a senha correta. Utilize a função `scanf()` novamente para receber a entrada do usuário e armazene o valor digitado em uma variável.

    3. Use um loop "while" para verificar se a senha digitada é correta. O loop deve continuar enquanto a senha não for correta e o número de tentativas for menor que o número máximo de tentativas permitidas.

    4. Dentro do loop, solicite ao usuário que digite a senha e compare-a com a senha definida pelo usuário.

    5. Contabilize o número de tentativas e verifique se a senha está correta.

    6. Quando a senha estiver correta ou o número máximo de tentativas for alcançado, informe ao usuário se o acesso foi autorizado ou bloqueado.

    Exemplo de saída do programa:

    ```
    Defina sua senha: 9876
    Defina o número máximo de tentativas: 3
    Digite sua senha: 1234
    Senha incorreta. Tentativas restantes: 2
    Digite sua senha: 4321
    Senha incorreta. Tentativas restantes: 1
    Digite sua senha: 9876
    Acesso autorizado!
    ```

    ```
    Defina sua senha: 4567
    Defina o número máximo de tentativas: 2
    Digite sua senha: 1234
    Senha incorreta. Tentativas restantes: 1
    Digite sua senha: 5678
    Senha incorreta. Tentativas restantes: 0
    Acesso bloqueado!
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha = 123;
    int senha_digitada, counter = 0;
    
    printf ("Digite sua senha: ");
    scanf ("%d", &senha_digitada);
    
    while (senha != senha_digitada && counter < 5){
        printf ("Digite sua senha: ");
        scanf ("%d", &senha_digitada);
        counter++;
    }
    if (counter < 5 && senha == senha_digitada){
            printf ("Acesso autorizado!");
        } else{
            printf ("Acesso bloqueado!");
        };
    return 0;
} 