/*Задание 3. Квадрат. Напишите функцию с именем square(n,c), которая выводит на экран квадрат размера n на n, заполненный символами c.
Входные данные: Одно целое число и символ заполнитель. Выходные данные: Квадрат из символов, указанного формата*/

#include <stdio.h>
void square(int x, char c)
    {
     for(int i=0; i<x; i++)
     {
     printf("\n");
     for(int j=0; j<x; j++)
     printf("%c",c);
     }
    }

  int main()
  {
  int a;
  char b;
  scanf("%d %c",&a,&b);
  square(a,b);
  }