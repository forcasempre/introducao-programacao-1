#include <stdio.h>
#include <locale.h>

int main()
{
    int termo_1, termo_2, i, termo;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe os dois primeiros n�meros da s�rie: ");
    scanf("%d%d", &termo_1, &termo_2);

    for (i = 3; i <= 10; i++) {
        if (i % 2 == 0) {
            termo = termo_1 - termo_2;
        } else {
            termo = termo_1 + termo_2;
        }

        printf("O %d� termo da s�rie � %d\n", i, termo);
        termo_1 = termo_2;
        termo_2 = termo;
    }
    return 0;
}