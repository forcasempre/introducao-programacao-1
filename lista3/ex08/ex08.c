#include <stdio.h>
#include <locale.h>

int main()
{
    int n, numero, i = 0, menor, maior;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Informe a quantidade N de n�meros: ");
        scanf("%d", &n);
    } while (n < 2);


    while (i < n) {
        printf("Informe o %d� n�mero: ", i + 1);
        scanf("%d", &numero);
        
        if (i == 0) {
            menor = numero;
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        } else if (numero > maior) {
            maior = numero;
        }
        i++;
    }

    printf("O menor n�mero � %d\nE o maior n�mero � %d", menor, maior);
    return 0;
}