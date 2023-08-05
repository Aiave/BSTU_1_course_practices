#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task_24()
{
    system("cls");

    printf("Условие задачи (100 баллов):\nВы должны своему другу 5 рублей. Вместо того, чтобы попросить вас вернуть ему сразу весь долг, Ваш друг предлагает,\n"
        "чтобы вы платили ему определенную сумму еженедельно в течение 10 недель. Он просит вас уплатить ему в первую неделю\n"
        "1 копейку, во вторую - 2, в третью - 4, в четвертую - 8 и т.д. Вы уже почти согласились с его предложением, но затем\n"
        "решаете сначала написать программу, чтобы проверить, какую сумму вам придется заплатить, если вы примете его\n"
        "предложение. Напишите эту программу и решите, каким способом лучше выплатить свой долг.\n\n");

    int weekly_payment = 1, amount_of_payments_in_kopecks = 0;
    double debt_sum = 5.00, amount_of_payments_in_rubles;
    
    for (int weeks_of_payment = 1; weeks_of_payment < 11; weeks_of_payment++)
    {
        amount_of_payments_in_kopecks += weekly_payment;
        weekly_payment = weekly_payment * 2;
    }

    amount_of_payments_in_rubles = (double)amount_of_payments_in_kopecks / 100;
    printf("Если платить долг по неделям, придётся заплатить %0.2lf рублей.\n", amount_of_payments_in_rubles);

    if (amount_of_payments_in_rubles > debt_sum)
        printf("Долг лучше платить сразу.\n");
    else
        printf("Долг лучше выплачивать по неделям.\n");

    back_to_tasks();
}