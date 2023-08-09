#include <stdio.h>
#include <stdlib.h>

void task_27()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nИвана Александровича Хлестакова пригласили управлять департаментом. В первый день ему прислали 1000 курьеров, а в каждый\n"
        "следующий присылали в два раза больше, чем в предыдущий. Иван Александрович согласился лишь тогда, когда к нему прибыло\n"
        "больше 30000 курьеров. На какой день день Хлестаков согласился управлять департаментом?\n\n");

    int number_of_couriers = 1000, number_of_days = 1;

    while (number_of_couriers < 30000)
    {
        printf("День %d. Курьеров прибыло: %d.\n", number_of_days, number_of_couriers);
        number_of_couriers = number_of_couriers * 2;
        number_of_days++;
    }

    printf("Хлестаков согласился управлять департаментом на %d день. Курьеров прибыло: %d.\n", number_of_days, number_of_couriers);
}

/*
Если бы количество новоприбывших курьеров суммировалось с уже пришедшими:

int number_of_couriers = 1000, number_of_days = 1, total_count_couriers = 0;
while (total_count_couriers < 30000)
    {
        total_count_couriers += number_of_couriers;
        number_of_couriers = number_of_couriers * 2;
        number_of_days++;
        printf("День %d. Курьеров прибыло: %d.\n", number_of_days, total_count_couriers);
    }
    */