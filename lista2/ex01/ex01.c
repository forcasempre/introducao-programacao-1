#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois n�meros inteiros: ");
    scanf("%d%d", &a, &b);

    if (a % b == 0) {
        printf("%d � divisivel por %d", a, b);
    } else {
        printf("%d n�o � divisivel por %d", a, b);
    }
    return 0;
}
