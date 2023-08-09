#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
    do
    {
        system("cls");

        printf("1. Задача 7 (50 баллов)\n"
            "2. Задача 27 (50 баллов)\n"
            "3. Задача 28 (50 баллов)\n"
            "4. Задача 4 (50 баллов)\n"
            "5. Задача 16 (100 баллов)\n"
            "6. Задача 24 (100 баллов)\n"
            "7. Задача 14 (150 баллов)\n"
            "\nВведите номер задания (1 - 7):\n");
        scanf_s("%d", &task_number);
    } while (task_number < 1 || task_number > 7);

    switch (task_number)
    {
        case 1:
        {
            task_7();
            back_to_tasks();
            break;
        }
        case 2:
        {
            task_27();
            back_to_tasks();
            break;
        }
        case 3:
        {
            task_28();
            back_to_tasks();
            break;
        }
        case 4:
        {
            task_4();
            back_to_tasks();
            break;
        }
        case 5:
        {
            task_16();
            back_to_tasks();
            break;
        }
        case 6:
        {
            task_24();
            back_to_tasks();
            break;
        }
        case 7:
        {
            task_14();
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