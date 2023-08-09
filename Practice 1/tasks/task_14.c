#include <stdio.h>
#include <stdlib.h>

void task_14()
{
    system("cls");

    printf("Условие задачи (150 баллов):\nДля натурального K (0 <= K <= 1000) напечатайте фразу \"мы нашли K грибов в лесу\", согласовав окончание слова \"гриб\"\nс числом K.\n\n");

    int number_of_mushrooms;
    do {
        printf("Сколько грибов мы нашли? Введите число от 0 до 1000.\n");
        scanf_s("%d", &number_of_mushrooms);
    } while (number_of_mushrooms < 0 || number_of_mushrooms > 1000);

    if (number_of_mushrooms % 100 >= 11 && number_of_mushrooms % 100 <= 14)
    {
        printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);
    } 
    else 
    {
        int last_number = number_of_mushrooms % 10;

        if (last_number == 0)
            printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);
        else if (last_number == 1)
            printf("\nМы нашли %d гриб в лесу.", number_of_mushrooms);
        else if (last_number >= 2 && last_number <= 4)
            printf("\nМы нашли %d гриба в лесу.", number_of_mushrooms);
        else if (last_number >= 5 && last_number <= 9)
            printf("\nМы нашли %d грибов в лесу.", number_of_mushrooms);
    }
}