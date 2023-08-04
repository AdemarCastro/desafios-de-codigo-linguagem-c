/*  NOME: ADEMAR
    MATRÍCULA: 2022******
    TURMA: TADS 2022/1

    Atividade 01)
    
    Crie um programa em linguagem C que solicite ao usuário algumas informações pessoais e apresente uma mensagem com os dados fornecidos. O programa deve calcular automaticamente a idade do aluno com base no ano de nascimento fornecido e assumindo que o ano atual é 2022.

    Instruções:

    Solicite ao usuário as seguintes informações:

    Nome do aluno;
    Nome da cidade em que o aluno mora;
    Sexo do aluno;
    Dia de nascimento do aluno;
    Mês de nascimento do aluno;
    Ano de nascimento do aluno.
    Calcule a idade do aluno utilizando o ano de nascimento fornecido e o ano atual (2022).

    Exiba uma mensagem formatada contendo as informações fornecidas pelo usuário e a idade calculada. A mensagem deve seguir o padrão:
    "Nome: [NOME]
    Cidade: [CIDADE]
    Sexo: [SEXO]
    Data de Nascimento: [DIA]/[MÊS]/[ANO]
    Idade: [IDADE] anos."

    Dê liberdade ao aluno para adicionar melhorias ao programa, como validação das entradas, tratamento de erros e uma apresentação mais elaborada dos dados.

    Teste o programa com diferentes valores de entrada para garantir seu correto funcionamento.

    Observação: O programa pode ser executado sem a necessidade de aguardar uma tecla ser pressionada antes de finalizar.
*/

/* Solução */
#include<stdio.h>
#include<conio.h>
int main(void)
{
  char nome[61];
  char cidade[61];
  char sexo[61];
  int dia1, mes1, ano1, idade;
  int ano2 = 2022;
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  printf("Digite o nome da cidade em que mora: ");
  scanf("%s",cidade);
  printf("Digite o seu sexo: ");
  scanf("%s",sexo);
  printf("Digite o dia em que nasceu: ");
  scanf("%d",&dia1);
  printf("Digite o mês em que nasceu: ");
  scanf("%d",&mes1);
  printf("Digite o ano em que nasceu: ");
  scanf("%d",&ano1);
  
  idade = ano2 - ano1;
  
  printf("O %s mora em %s, é do sexo %s e faz aniversário em %d/%0d. Hoje ele tem %d anos.", nome, cidade, sexo, dia1, mes1, idade);
  
  getch();
  return 0;
}
