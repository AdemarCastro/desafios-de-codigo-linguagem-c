/*  NOME: ADEMAR
    MATRÍCULA: 2022******
    TURMA: TADS 2022/1

    Atividade 02)

    Seu desafio é implementar uma versão revisada deste código, onde o usuário possa inserir valores para as variáveis "a" e "b" em vez de atribuir valores fixos no próprio código. O programa deve solicitar ao usuário que digite os valores para "a" e "b", realizar a divisão e exibir o resultado na tela.

    Dicas:

    - Utilize a função scanf() para receber a entrada do usuário.

    - Lembre-se de incluir a biblioteca necessária para usar a função scanf() corretamente.

    - Modifique o código para que o usuário possa inserir os valores de "a" e "b" durante a execução do programa.

    Após implementar a versão revisada do código, teste-o inserindo diferentes valores para "a" e "b" e verifique se o programa calcula e exibe corretamente o resultado da divisão. Boa sorte no desafio!
*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    
        float x, a, b;
        a = 78;
        b = -9;
        
        x = b / a;
        
        printf("\nx = %f", x);
        

return 0;
}