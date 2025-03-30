#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число до 500: ";
	cin >> a;
	if (a > 500) {
		cout << "\nВы ввели число больше 500!";
		return 0;
	}
	while (a != 501) {
		sum += a;
		a++;
	}
	cout << "Сумма чисел равна: " << sum;
}