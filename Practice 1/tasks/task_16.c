#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tasks.h"

void task_16()
{
    system("cls");

    printf("Условие задачи (100 баллов):\nСоставить программу для вычисления 1!+2!+3!+....+n!\n\n");

    int limit_number;
    do {
        printf("Введите конечное число (n): ");
        scanf_s("%d", &limit_number);
    } while (limit_number < 0);
    printf("\nПолученный результат: %d\n", calculate_sum_of_factorials(limit_number));
}

int calculate_sum_of_factorials(int limit_number)
{
    int sum_of_factorials = 0;
    int factorial_of_number = 1;
    for (int i = 1; i <= limit_number; i++)
    {
        factorial_of_number *= i;
        sum_of_factorials += factorial_of_number;
    }
    return sum_of_factorials;
}