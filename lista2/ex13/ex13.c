#include <stdio.h>
#include <locale.h>

int main()
{
	int numero;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe um n�mero entre 1 e 12 correspondente ao m�s: ");
	scanf("%d", &numero);

	switch (numero) {
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Mar�o\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("N�o existe m�s com este n�mero!\n");
	}
}
