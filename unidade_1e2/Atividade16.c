/******************************************************************************

NOME: ADEMAR
MATRÍCULA: 2022******
TURMA: TADS 2022/1

    Atividade 16)

    O código fornecido é um programa simples que simula um sistema de login e senha. Vamos aprimorá-lo, adicionando a possibilidade de cadastrar um novo usuário com login e senha e permitindo que os usuários cadastrados façam login com suas credenciais.

    Seu desafio é implementar uma versão revisada deste código, que permita ao usuário cadastrar um novo usuário com login e senha, bem como fazer login no sistema com as credenciais cadastradas. O programa deve fornecer as seguintes opções:

    1. Cadastrar novo usuário: O usuário deve poder inserir um novo login e uma senha para se cadastrar.

    2. Fazer login: O usuário deve poder fazer login com um login e uma senha previamente cadastrados.

    3. Sair: O usuário pode sair do programa.

    Ao fazer login, o programa deve verificar se o login e a senha correspondem a um usuário cadastrado e conceder acesso em caso afirmativo. O programa deve permitir ao usuário tentar fazer login várias vezes antes de bloquear o acesso após três tentativas incorretas.

    Dicas:

    1. Use um array para armazenar os logins cadastrados e outro array para armazenar as senhas correspondentes.

    2. Implemente um loop "while" para permitir que o usuário faça várias operações antes de sair do programa.

    3. Use estruturas de seleção (como "if" ou "switch") para verificar a escolha do usuário e agir de acordo com a opção selecionada.

    4. Ao cadastrar um novo usuário, armazene o login e a senha nos arrays correspondentes.

    5. Ao fazer login, verifique se o login e a senha correspondem a um usuário cadastrado. Use um loop para permitir ao usuário fazer várias tentativas antes de bloquear o acesso.

    6. Exiba mensagens informativas ao usuário para indicar se o login foi bem-sucedido ou se ocorreu um erro.

    Exemplo de saída do programa:

    ```
    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Cadastrar novo usuário
    2 - Fazer login
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 1
    Digite o novo login: novo_usuario
    Digite a nova senha: 12345

    Usuário cadastrado com sucesso!

    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Cadastrar novo usuário
    2 - Fazer login
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 2
    Digite o login: novo_usuario
    Digite a senha: 1234

    Login incorreto. Tentativas restantes: 2

    Digite o login: novo_usuario
    Digite a senha: 12345

    Login bem-sucedido! Bem-vindo, novo_usuario.

    ------------------------------------------------------------
    Digite um dos números para acessar as opções.
    1 - Cadastrar novo usuário
    2 - Fazer login
    3 - Sair
    ------------------------------------------------------------
    Digite um número de 1 a 3 para acessar o menu: 3

    Você saiu.

    ```

    Lembre-se de comentar o código para explicar o que cada parte faz, tornando-o mais claro e compreensível. Boa sorte no desafio de implementação!

*******************************************************************************/

#include <stdio.h>

int main (void)
{
    int valor, i, senha2, senha1 = 1234;
    char login1[]="admin";
    char login2;            
    
    while (valor != 3){
        
    printf ("------------------------------------------------------------\n");
    printf ("Digite um dos números para acessar as opções.\n");
    printf ("Acessar login e senha: 1\n");
    printf ("Trocar senha: 2\n");
    printf ("Sair: 3\n");
    printf ("------------------------------------------------------------\n");
        
        printf ("Digite um número de 1 a 3 para acessar o menu: ");
        scanf ("%d", &valor);
        
        switch (valor){
            
            case 1:
            for (i = 0; i <= 3; i++){
            printf ("Digite seu login: ");
            scanf ("%d", &senha2);
                if (senha1 == senha2){
                    printf ("Acesso concedido.\n");
                    break;
                } if (i >= 3){
                    printf ("Atingiu o limite de tentativas de login.\n");
                } else{
                    printf ("Acesso negado.\n");
                }
            }
            break;
            
            case 2:
            printf ("\nDigite sua nova senha: ");
            scanf ("%d", &senha1);
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
