#include <stdio.h>
#include <locale.h>

int main()
{
	float numero;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe um n�mero: ");
	scanf("%f", &numero);

	if (numero >= 20 && numero <= 90) {
		printf("O n�mero est� entre 20 e 90\n");
	} else {
		printf("O n�mero n�o est� entre 20 e 90\n");
	}

	return 0;
}
