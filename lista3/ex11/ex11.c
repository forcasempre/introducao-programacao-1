#include <stdio.h>
#include <locale.h>

int main()
{
    int numero = -1;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    
    while (numero != 0) {
        printf("O triplo de %d � %d\n", numero, numero * 3);
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
    }
    return 0;
}