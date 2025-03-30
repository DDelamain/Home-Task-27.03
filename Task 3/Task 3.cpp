#include <iostream>
using namespace std;

double arif, sum;
int i=1;
int main(){
	setlocale(LC_ALL, "Rus");
	while (i != 1001) {
		sum += i;
		i++;
	}
	arif = sum / 1000;
	cout <<"Среднее арифметическое от 1 до 1000: " << arif;
}
