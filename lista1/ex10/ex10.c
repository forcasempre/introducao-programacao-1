#include <stdio.h>
#include <locale.h>

int main() {
    float salario_funcionario, novo_salario;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o seu sal�rio atual: ");
    scanf("%f", &salario_funcionario);

    novo_salario = salario_funcionario + salario_funcionario * 0.25;

    printf("O novo sal�rio �: %.2f", novo_salario);
    return 0;
}
