#include <iostream>
using namespace std;
int a,i;
int main(){
    setlocale(LC_ALL, "Rus");
    cout << "Введите число a от 1 до 20: ";
    cin >> a;
    if (a < 1 || a>20) {
        cout << "\nВведено некорректное число!\n";
        return 0;
    }
    i = a;
    if (i == 20) {
        cout << "\nСумма от а до 20: " << a;
    }
    else {
        while (i < 20) {
            i++;
            a += i;
        }
        cout << "\nСумма от а до 20: " << a;
    }
}
