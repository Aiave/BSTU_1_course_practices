#include <stdio.h>
#include <stdlib.h>

void task_28()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nВывести все натуральные числа от 1 до 100, кратные 3, и их количество.\n\n");

    printf("Натуральные числа, кратные 3:\n");

    int count_of_natural_nambers = 0;
    for (int number_multiple_of_three = 3; number_multiple_of_three < 100; number_multiple_of_three += 3)
    {
        printf("%d ", number_multiple_of_three);
        count_of_natural_nambers++;
    }
    printf("\nВсего чисел: %d", count_of_natural_nambers);
}