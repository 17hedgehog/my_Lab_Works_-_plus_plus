#include <iostream>

// Функция для вычисления факториала.

double factorial(double a) {
	int a0 = 1;
	for (int i = 1; i <= a; i++) {
		a0 = a0 * i;
	}
	return a0;
}