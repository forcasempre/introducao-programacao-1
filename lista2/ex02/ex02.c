#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float numero;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe um n�mero: ");
    scanf("%f", &numero);

    if (numero > 20) {
        printf("%.2f\n", numero);
    }
    return 0;
}
