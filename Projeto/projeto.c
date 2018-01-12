#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

    struct cadastro {
        char nome[50];
        char sexo; //m/f
        int idade;
        char cpf[12];
        char fone[11];
        char saude[20];
   };


int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("\n\n*****************************BEM-VINDOS*****************************\n\n");
    int op, op2, count, j;
    char chamadaC [12][30];
    char pc;

    //ENTRADA INICIAL DE DADOS
    printf("Informe a opção: \n1 ATUALIZAÇÃO\n2 CHAMADA\n3 PERFOMACE\n>> ");
    scanf("%i",&op);

        switch(op){
        case 1:
            printf("\n1 ATUALIZAÇÃO DE PAGAMENTO\n2 NOVOS ALUNOS\n>> ");
            scanf("%i",&op2);
                switch(op2) {
                    case 1:
                        printf("oi");
                        break;
                    case 2:
                        printf("\nQuantos alunos voce deseja cadastrar?\n>> ");
                        scanf("%i",&j);
                        printf("\n");
                        struct cadastro aluno[j];

                        for (count=0; count<j; count++) {
                            printf("Digite nome do %iº aluno:", count+1);
                            fflush(stdin);
                            gets(aluno[count].nome);
                            printf("Sexo[M/F]:");
                            scanf("%c",&aluno[count].sexo);// while
                            printf("idade:");
                            scanf("%i",&aluno[count].idade);
                            printf("CPF:");
                            fflush(stdin);
                            gets(aluno[count].cpf);
                            printf("fone:");
                            fflush(stdin);
                            gets(aluno[count].fone);
                            printf("plano de saude:");
                            fflush(stdin);
                            gets(aluno[count].saude);
                            }
                        printf("\nLISTA DOS ALUNOS:\n");
                        for (count=0; count<j; count++){
                            printf("%iº - %s\n",count+1,aluno[count]);}
                    break;}
        }

    return 0;
}
