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
			cout << "������������� ����� for" << endl;
			cout << "��������� �� �������� = " << functionFor(a, e, r) << endl;
			cout << "��������� �� ������ = " << r << endl;
			break;
		}
		case '2': {
			cout << "������������� ����� while" << endl;
			cout << "��������� �� �������� = " << functionWhile(a, e, r) << endl;
			cout << "��������� �� ������ = " << r << endl;
			break;
		}
		case '3': {
			cout << "������������� ����� do while" << endl;
			cout << "��������� �� �������� = " << functionDoWhile(a, e, r) << endl;
			cout << "��������� �� ������ = " << r << endl;
			break;
		}
		default:
			cout << "�� ����� ������������ �������." << endl;
			cout << "��� ������������� ����� for ����������� ������� - 1" << endl;
			cout << "��� ������������� ����� while ����������� ������� - 2" << endl;
			cout << "��� ������������� ����� do whele ����������� ������� - 3" << endl;
			cout << "����� ����� �� ��������� ����������� ������� - 0" << endl;
		} 
	}
}
