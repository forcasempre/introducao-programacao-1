#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, count = 0;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero > 0) count++;
    } while (numero > 0);

    printf("Foram digitados %d n�meros.\n", count);
    return 0;
}