/**
Курс: Стивен Прата "Язык программирования C"
Глава: 5
Дата выполнения: 14.03.2023
Код выполнила студентка группы 22ИС: Левченко А.И.
Код проверил преподаватель МДК.01.01: Гусятинер Л.Б.
*/

/**
5.Внесите изменения в программу addemup.с (листинг 5.13), которая вычисляет
сумму первых 20 целых чисел. (Если хотите, можете считать addemup.с программой, 
которая вычисляет сумму, которую вы будете иметь спустя 20 дней, если 
в первый день вы получаете $1, во второй день — $2, в третий день — $3 и т.д.). 
Модифицируйте программу так, чтобы можно было интерактивно указать, насколько 
далеко должно распространяться вычисление. Другими словами, замените 
число 20 переменной, значение которой вводится пользователем.
*/
#include <stdio.h>
int main()
{
    int i=0, rez=0, num;
    printf("num: ");
    scanf("%d", &num); //введите целое число, которое вычислит сумму чисел, входящих в него
    
    while (i++<num)
        
        rez=i+rez;
   
    printf("rezult: %d\n", rez);
    return 0;
}