#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float trabalho, avaliacao, examefim, med;
    printf("insira a nota do trabalho:\n");
    scanf("%f", &trabalho);
    printf("insira a nota da avaliação:\n");
    scanf("%f", &avaliacao);
    printf("insira a nota do exame final:\n");
    scanf("%f", &examefim);
    med = (trabalho * 2 + avaliacao * 3 + examefim * 5) / 10;
    printf("o valor da media é:%.2f\n", med);
    if (med >= 8 && med <= 10)
    {
        printf("conceito A.\n");
    }
    else if (med >= 7 && med < 8)
    {
        printf("conceito B.\n");
    }
    else if (med >= 6 && med < 7)
    {
        printf("conceito C.\n");
    }
    else
    {
        printf("conceito D.\n");
    }
}
