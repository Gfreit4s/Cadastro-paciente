#include<stdio.h>
#define SIZE 200
char nome[SIZE][50];
char end[SIZE][50];
int dia[SIZE], mes[SIZE], ano[SIZE];
char sexo[SIZE][1];
int visitadia[SIZE],visitames[SIZE],visitaano[SIZE];
char problema[SIZE][50];
int numero [SIZE];
int op;


void cadastro(){
	
	static int linha;
	do{
		printf("\n Digite o nome do paciente:");
		scanf("%s" , &nome[linha]);
			printf("\n Digite o endereco:");
			scanf("%s" , &end[linha]);
				printf("\n Numero casa:");
				scanf("%d", &numero[linha]);
						printf("\n Data de nascimento:");
							printf("\n Dia:");
							scanf("%d", &dia[linha]);
								printf("\n Mes:");
								scanf("%d", &mes[linha]);
									printf("\n Ano:");
									scanf("%d", &ano[linha]);
										printf("\n Digite o sexo para (F)de feminino ou (M) de masculino:");
											scanf("%s" , &sexo[linha]);
												printf("\n Dia de visita do paciente:");
													printf("\n Dia:");
													scanf("%d", &visitadia[linha]);
														printf("\n Mes:");
														scanf("%d", &visitames[linha]);
															printf("\n Ano:");
																scanf("%d", &visitaano[linha]);
																	printf("\n Laudo de problema:");
																	scanf("%s" , &problema[linha]);
													
		printf("\n Digite 1 para continuar ou outro para sair");
		scanf("%d" , &op);
		linha++;
		
	}while (op==1);
}

void sair()
{
    printf("Volte em breve !\n");
}

int main()
{
    int continuar=1;

    do
    {
        printf("\n\tSeja Bem vindo!\n\n");
        printf("1. Cadastro paciente\n");
        printf("2. Ver visitas\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);

        switch(continuar)
        {
            case 1:
                cadastro();
                break;

            case 2:
               // procurar(int visita);
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
