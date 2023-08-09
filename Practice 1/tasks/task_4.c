#include <stdio.h>
#include <stdlib.h>

void task_4()
{
	system("cls");

	printf("Условие задачи (100 баллов):\nОпределить номера подъезда и этажа по номеру квартиры девятиэтажного дома, считая, что на каждом этаже ровно 4 квартиры,\n"
	"а нумерация квартир начинается с первого подъезда.\n\n");

	int apartment_number;
	do
	{
		printf("Введите номер квартиры: ");
		scanf_s("%d", &apartment_number);
	} while (apartment_number < 1);

	int entrance_number = (apartment_number - 1) / 36 + 1;
	printf("\nНомер подъезда: %d\n", entrance_number);
	
	int floor = ((apartment_number - 1) % 36) / 4 + 1;
	printf("Этаж: %d\n", floor);
}