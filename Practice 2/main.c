#include <stdio.h>
#include <locale.h>
#include "tasks/tasks.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int task_number = 0;
    select_task(task_number);

    return 0;
}