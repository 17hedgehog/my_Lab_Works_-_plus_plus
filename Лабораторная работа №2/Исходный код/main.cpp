#include <iostream>

using namespace std;

double functionFor(double a, double e, double &r);
double functionWhile(double a, double e, double &r);
double functionDoWhile(double a, double e, double &r);

void main(void) {
	setlocale(0, "rus");
	char i;
	double r;
	double a,e;
	i = 1;
	cin >> a >> e;
	while (i != '0') {
		cin >> i;
		switch (i) {
		case '1': {
			cout << "Использование цикла for" << endl;
			cout << "Результат по значению = " << functionFor(a, e, r) << endl;
			cout << "Результат по ссылке = " << r << endl;
			break;
		}
		case '2': {
			cout << "Использование цикла while" << endl;
			cout << "Результат по значению = " << functionWhile(a, e, r) << endl;
			cout << "Результат по ссылке = " << r << endl;
			break;
		}
		case '3': {
			cout << "Использование цикла do while" << endl;
			cout << "Результат по значению = " << functionDoWhile(a, e, r) << endl;
			cout << "Результат по ссылке = " << r << endl;
			break;
		}
		default:
			cout << "Вы ввели неправильную команду." << endl;
			cout << "Для использованья цикла for используйте команду - 1" << endl;
			cout << "Для использованья цикла while используйте команду - 2" << endl;
			cout << "Для использованья цикла do whele используйте команду - 3" << endl;
			cout << "Чтобы выйти из программы используйте команду - 0" << endl;
		} 
	}
}
