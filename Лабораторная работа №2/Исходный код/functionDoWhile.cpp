#include <iostream>

extern double step(double a, double b);
extern double factorial(double a);

// ������� ��������� ����� ���� Do While.

double functionDoWhile(double a, double e, double &r) {
	int s = 1;
	int k = 2;
	int j = 1;
	do {
		if (j == 1) {
			r = -(a / 2);
		}
		else if (j % 2 == 0) {
			s = s + 2;
			r = r + step(a, s) / (k * factorial(s));
		}
		else if (j % 2 != 0) {
			s = s + 2;
			r = r - step(a, s) / (k * factorial(s));
		}
		k++;
		j++;
	} while (j <= e);
	return r;
}