#include <iostream>
using namespace std;;
int main()
{	
	setlocale(LC_ALL, "");
	int a;
	int b;
	cout << "Введите первое число:" << endl;
	cin >> a;
	cout << "Введите второе число:" << endl;
	cin >> b;
	cout << "Ответ: " << a + b;
}