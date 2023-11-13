#include <stdio.h>
#include <stdlib.h>

void task_3()
{
    system("cls");

    printf("Условие задачи (100 баллов):\nОпределите число суток с А года по В год (учтите високосные годы).\n\n");

    int year_A, year_B;
    printf("Введите год A: ");
    scanf_s("%d", &year_A);
    printf("Введите год B: ");
    scanf_s("%d", &year_B);

    int result = days_between_years(year_A, year_B);
    printf("Число суток с %d года по %d год (включительно): %d\n", year_A, year_B, result);
}

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_year(int year)
{
    return is_leap_year(year) ? 366 : 365;
}

int days_between_years(int yearA, int yearB)
{
    int days = 0;

    for (int year = yearA; year <= yearB; ++year)
    {
        days += days_in_year(year);
    }

    return days;
}