#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task_4()
{
	system("cls");

	printf("Условие задачи (50 баллов):\nОпределить номера подъезда и этажа по номеру квартиры девятиэтажного дома, считая, что на каждом этаже ровно 4 квартиры,\n"
	"а нумерация квартир начинается с первого подъезда.\n\n");

	int apartment_number;
	do
	{
		printf("Введите номер квартиры:\n");
		scanf_s("%d", &apartment_number);
	} while (apartment_number < 1);

	int entrance_number, floor;

	back_to_tasks();
}