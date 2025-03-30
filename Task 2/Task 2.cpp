#include <iostream>
using namespace std;

int main(){
    int i=1, x, y,x1,y1;
    setlocale(LC_ALL, "Rus");
    cout << "\nВведите x: ";
    cin >> x;
    x1 = x;
    cout << "\nВведите y: ";
    cin >> y;
    while (i != y) {
        x *= x1;
        i++;
    }
    cout << endl << x1 << " в степени " << y << " равно " << x;
}
