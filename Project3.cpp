#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a = 10;
	int b = 1;

	while (a > 0) {
		b *= a;
		a--;
	}

	cout << "Факториал числа 10 равно " << b << endl;

	return 0;

}