#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tasks.h"

void task_7()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nЕсли в четырехзначном числе, введенном с клавиатуры, ровно 3 одинаковых цифры, то вывести \"да\", иначе – \"нет\".\n\n");

    int four_digit_number;
    do {
        printf("Введите четырёхзначное число: ");
        scanf_s("%d", &four_digit_number);
    } while (four_digit_number < 1000 || four_digit_number > 9999);

    if (has_three_same_digit(four_digit_number))
        printf("Да\n");
    else
        printf("Нет\n");
}

bool has_three_same_digit(int number)
{
    while (number > 0)
    {
        int last_digit_of_number = number % 10;
        int counter = 0;

        int copy_of_digit = number;
        while (copy_of_digit > 0)
        {
            int discharge = copy_of_digit % 10;
            copy_of_digit /= 10;

            if (last_digit_of_number == discharge)
                counter++;

            if (counter >= 3)
                return true;
        }
        number /= 10;
    }
    return false;
}