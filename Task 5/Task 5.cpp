#include <iostream>
using namespace std;
int k, i = 1;
int main(){
    setlocale(LC_ALL, "Rus");
    cout << "Введите ваш вариант: ";
    cin >> k;
    while (i != 10) {
        cout << k << " * " << i << " = " << k * i << endl;
        i++;
    }
}
