#include <iostream>

// Функция для возведения в степень.

double step(double a, double b) {
	double a0 = a;
	for (int i = 1; i < b; i++) {
		a = a * a0;
	}
	return a;
}