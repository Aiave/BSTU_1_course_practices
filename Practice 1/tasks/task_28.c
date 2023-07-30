#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task_28()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nВывести все натуральные числа от 1 до 100, кратные 3, и их количество.\n\n");

    printf("Натуральные числа, кратные 3:\n");
    int number_natural_nambers = 0;
    for (int number_multiple_of_three = 3; number_multiple_of_three < 100; number_multiple_of_three += 3)
    {
        printf("%d ", number_multiple_of_three);
        number_natural_nambers++;
    }
    printf("\nВсего чисел: %d", number_natural_nambers);

    back_to_tasks();
}