#include <stdio.h>
#include <locale.h>

int main()
{
    float preco_fabrica, percentual_lucro, percentual_imposto, preco_final, imposto, lucro_distribuidor;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o pre�o de f�brica do ve�culo: ");
    scanf("%f", &preco_fabrica);

    printf("Informe o percentual de lucro do distribuidor: ");
    scanf("%f", &percentual_lucro);

    printf("Informe o percentual de imposto: ");
    scanf("%f", &percentual_imposto);

    lucro_distribuidor = preco_fabrica * (percentual_lucro / 100);
    imposto = preco_fabrica * (percentual_imposto / 100);

    preco_final = preco_fabrica + lucro_distribuidor + imposto;

    printf("O lucro do distribuidor �: R$ %.2f\n", lucro_distribuidor);
    printf("O valor dos impostos �: R$ %.2f\n", imposto);
    printf("O preco final do ve�culo �: R$ %.2f\n", preco_final);

    return 0;
}
