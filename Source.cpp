#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a,b;
	cout << "������� ��� ����� ����� ������: ";
	cin >> a >> b;
	a < b ? cout << b : cout << a;
	return 0;
}