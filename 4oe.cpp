#include <iostream>
#include <locale.h>
#include <cmath>          // для std::fabs
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, r;

    cout << "Введите x, y, радиус: ";
    cin >> x >> y >> r;

    if (r <= 0) {
        cout << "Ошибка: радиус должен быть положительным!\n";
        return 0;
    }

    double d2 = x*x + y*y, r2 = r*r;// высчитываем 

    if (d2 < r2)                          cout << "Точка внутри круга\n";
    else if (fabs(d2 - r2) < 1e-9)        cout << "Точка на границе круга\n";
    else                                  cout << "Точка снаружи круга\n";

    return 0;
}
