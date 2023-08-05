#include <stdio.h>
#include <stdlib.h>
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

    int last_digit_of_number, discharge;
    last_digit_of_number = four_digit_number % 10;

    back_to_tasks();
}
  
//four_digit_number - четырёхзначное число
//last_digit_of_number - последняя цифра в числе
//discharge - разряд
//counter - счётчик