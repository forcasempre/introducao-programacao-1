#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415

int main() {
    double raio;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o raio do c�rculo: ");
    scanf("%lf", &raio);

    printf("A �rea do c�rculo �: %lf\n", PI * pow(raio, 2));
    return 0;
}
