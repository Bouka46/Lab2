#include<iostream>
#include"Fraction.h"
/*
Написать класс Fraction для представления обыкновенных дробей (как отношения
двух целых чисел x/y). Перегрузить операторы +, -, *, / для дробей. Реализовать метод
void reduce() для сокращения дроби, а также статические методы:
 int gcd(int n, int m)
функция для нахождения наибольшего общего делителя чисел n и m;
 void printAsFraction(double decimal_fraction)
 void printAsFraction(char* decimal_fraction)
перегруженные методы вывода десятичной дроби в виде обыкновенной
(например, при значении decimal_fraction = 0.43 на экране должно
вывестись 43/100, при 0.25 – 1/4 и т.д.).
Также реализовать в виде статического члена класса счетчик всех созданных на
данный момент в программе экземпляров дробей.
Продемонстрировать работу созданного класса. Создать несколько объектов дробей.
Произвести операции сложения, вычитания, умножения и деления дробей. Вывести
на экран результаты. Показать также результаты работы статических методов класса.
*/

int main() {

	Fraction test(100, 25);
	Fraction test2(55, 10);

	Fraction result = test - test2;
	result.print();				   //   -375 / 250
	result.reduce();		      // ñîêðàùàåò äðîáü
	result.print();				  //   3 / -2

	Fraction test3;
	test3.prinitAsFraction(0.43); //  43 / 100
	test3.prinitAsFraction(0.25); //  1 / 4

}
