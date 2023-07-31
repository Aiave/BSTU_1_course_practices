#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
    do
    {
        system("cls");

        printf("Введите номер задания (1 - 4):\n");
        scanf_s("%d", &task_number);
    } while (task_number < 1 || task_number > 4);

    switch (task_number)
    {
        case 1:
        {
            task_27();
            break;
        }
        case 2:
        {
            task_28();
            break;
        }
        case 3:
        {
            task_16();
            break;
        }
        case 4:
        {
            task_14();
            break;
        }
    }
}

void back_to_tasks()
{
    int command;

    do
    {
        printf("\n\nВернуться к выбору задания?\n 1 - да\n 0 - нет\n");
        scanf_s("%d", &command);
        if (command == 1)
            select_task(0);
        else
            exit(0);
    } while (command < 0 || command > 1);
}