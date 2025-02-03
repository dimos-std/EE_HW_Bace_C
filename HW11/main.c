// Создать массив из структурного типа данных для хранения температуры.
// Структура типа:
//     dddd - год 4 цифры
//     mm - месяц 2 символа
//     dd - день 2 цифры
//     hh - часы 2 цифры
//     mm - минуты 2 цифры
//     temperature - целое число от -99 до 99
// Создать прототипы (заглушки) функций
//  вывода статистики по каждому месяцу: среднемесячная температура, минимальная температура в текущем месяце, максимальная температура в текущем месяце
//  вывода статистики за год: среднегодовая температура, минимальная температура, максимальная температура
// Все прототипы функций используемые в приложении должны быть вынесены в отдельный файл temp_api.h
// Тексты функций - в файл temp_api.c
// Приложение должно собираться при помощи утилиты make
#include <stdio.h>
#include <locale.h>
#include "temp_api.h"

int main(void)
{
    temp_rec_t data;

    // setlocale();

    printf("Homework(HW11) demonstration programm\n");
    printf("Addres of a variable of a structure type and its fields\n");
    printf("Structure:\t%p\nfild 1:\t\t%p\nfild 2:\t\t%p\nfild 3:\t\t%p\nfild 4:\t\t%p\nfild 5:\t\t%p\nfild 6:\t\t%p\n",
           &data, &(data.year), &(data.month), &(data.day), &(data.hour),&(data.minute),&(data.temp));
}