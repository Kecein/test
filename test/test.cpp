#include <iostream>
using namespace std;;
int main()
{	
	setlocale(LC_ALL, "");
	int a;
	int b;
	cout << "First number:" << endl;
	cin >> a;
	cout << "Second number:" << endl;
	cin >> b;
	cout << "Answer: " << a + b;
}
