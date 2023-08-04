/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 15)

    O código fornecido solicita ao usuário que digite um login e uma senha e verifica se eles correspondem aos valores pré-definidos (MEU_LOGIN e MINHA_SENHA). Vamos tornar o programa mais seguro, permitindo que o usuário tenha três tentativas para digitar corretamente o login e a senha. Além disso, ao digitar a senha, vamos escondê-la da tela para evitar que seja visível.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário ter três tentativas para digitar o login e a senha corretamente. O programa deve solicitar ao usuário que insira o login e a senha e, em seguida, verificar se correspondem aos valores pré-definidos (MEU_LOGIN e MINHA_SENHA). O programa deve permitir ao usuário digitar a senha sem exibi-la na tela e limitar o número de tentativas a três.

    Dicas:

    1. Implemente um loop "for" para permitir ao usuário ter três tentativas para digitar o login e a senha corretamente.

    2. Use uma variável contador para acompanhar o número de tentativas e termine o loop "for" se o usuário acertar o login e a senha ou esgotar o número de tentativas.

    3. Use a função `strcmp()` da biblioteca `string.h` para comparar o login e a senha digitados pelo usuário com os valores pré-definidos (MEU_LOGIN e MINHA_SENHA).

    4. Para evitar que a senha seja visível ao digitar, você pode usar a função `getch()` da biblioteca `conio.h` para ler cada caractere da senha individualmente, sem exibi-los na tela.

    Exemplo de saída do programa:

    ```
    LOGIN: Usuario
    SENHA: ****
    Senha incorreta. Tentativas restantes: 2
    SENHA: ****
    Senha incorreta. Tentativas restantes: 1
    SENHA: ****
    Senha incorreta. Tentativas restantes: 0
    Acesso bloqueado!
    ```

    ```
    LOGIN: MEU_LOGIN
    SENHA: ****
    Logado
    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main ()
{
    char login[15] = "MEU_LOGIN"; //Tem que ter mais espaço que a string. Pelo menos 1 a mais que a palavra.
    char login1[15]; //Pode ser do mesmo tamanho que o login
    char senha[15] = "MINHA_SENHA";
    char senha1[15];

    printf("LOGIN: ");
    scanf("%s",login1); //String se lê com %s
    if (strcmp(login, login1) == 0) //strcmp() é uma função da biblioteca string.h que compara 2 strings. Se for igual a 0 é porque as duas são iguais.
    {
    	printf("Logado\n");
    }
    else
    {
    	printf("error\n");
    }
    
    return 0;
}       