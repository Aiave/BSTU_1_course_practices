#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tasks.h"

void task_16()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nСоставить программу для вычисления 1!+2!+3!+....+n!\n\n");

    int number_n, sum_of_factorials = 0;
    do {
        printf("Введите конечное число (n): ");
        scanf_s("%d", &number_n);
    } while (number_n < 0);
    printf("\nПолученный результат: %d", calculate_sum_of_factorials(number_n, sum_of_factorials));

    back_to_tasks();
}

int calculate_sum_of_factorials(int number_n, int sum_of_factorials)
{
    int factorial_of_number = 1;
    for (int i = 1; i <= number_n; i++)
    {
        factorial_of_number *= i;
        sum_of_factorials += factorial_of_number;
    }
    return sum_of_factorials;
}