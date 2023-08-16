#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
    do
    {
        system("cls");

        printf("1. Задача 7\t (50 баллов)\n"
            "\nВведите номер задания (1 - 1):\n");
        scanf_s("%d", &task_number);
    } while (task_number < 1 || task_number > 1);

    switch (task_number)
    {
    case 1:
    {
        task_7();
        back_to_tasks();
        break;
    }
    }
}

void back_to_tasks()
{
    int command;

    do
    {
        printf("\n\nВернуться к выбору задания?\n 1. Да.\n 0. Нет.\n");
        scanf_s("%d", &command);
        if (command == 1)
            select_task(0);
        else
            exit(0);
    } while (command < 0 || command > 1);
}