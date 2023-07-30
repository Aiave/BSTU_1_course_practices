#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task_14()
{
    system("cls");

    printf("Условие задачи (150 баллов):\nДля натурального K (0 <= K <= 1000) напечатайте фразу \"мы нашли K грибов в лесу\", согласовав окончание слова \"гриб\"\nс числом K.\n\n");

    int number_of_mushrooms;
    do {
        printf("Сколько грибов мы нашли? Введите число от 0 до 1000.\n");
        scanf_s("%d", &number_of_mushrooms);
    } while (number_of_mushrooms < 0 || number_of_mushrooms > 1000);

    //(11-14)
    if (number_of_mushrooms % 100 > 10 && number_of_mushrooms % 100 < 15)
        printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);
    else
    {
        //(0)
        if ((number_of_mushrooms % 10) == 0)
            printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);

        //(1)
        else if ((number_of_mushrooms % 10) == 1)
            printf("\nМы нашли %d гриб в лесу.", number_of_mushrooms);

        //(2-4)
        else if ((number_of_mushrooms % 10) >= 2 && (number_of_mushrooms % 10) <= 4)
            printf("\nМы нашли %d гриба в лесу.", number_of_mushrooms);

        //(5-9)
        else if ((number_of_mushrooms % 10) >= 5 && (number_of_mushrooms % 10) <= 9)
            printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);
    }

    back_to_tasks();
}