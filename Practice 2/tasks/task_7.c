#include <stdio.h>
#include <stdlib.h>

void task_7()
{
    system("cls");

    printf("Условие задачи (50 баллов):\nОпределить минимальное значение в последовательности чисел, вводимых с клавиатуры до первого отрицательного числа.\n\n");

	int number[100], counter = 0;
	printf("Введите числовую последовательность:\n");

	for (counter = 0; counter < 100; counter++)
	{
		scanf_s("%d", &number[counter]);
		if (number[counter] < 0)
			break;
	}

	int min_number = number[0];
	for (int i = 1; i < counter; i++)
	{
		if (number[i] < min_number)
			min_number = number[i];
	}

	if (min_number < 0)
		printf("Ваш ряд не имеет положительных чисел!");
	else
		printf("Минимальное значение в последовательности: %d", min_number);
}