#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario_bruto, valor_prestacao;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o valor do sal�rio bruto e o valor da parcela: ");
    scanf("%f%f", &salario_bruto, &valor_prestacao);

    if (valor_prestacao > salario_bruto * 0.3) {
        printf("O empr�stimo n�o pode ser concedido\n");
    } else {
        printf("Empr�stimo aprovado!\n");
    }

    return 0;
}
