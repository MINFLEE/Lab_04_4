// Lab_04_4.cpp
// Котович Максим Михайлович
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 20

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R, xp, xk, dx;
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(4) << "x" << "    |"
        << setw(6) << "y" << "     |" << endl;
    cout << "----------------------" << endl;
    x = xp;

    while (x <= xk)
    {
        if (x <= -2)
            y = 1;
        else
            if (-2 < x && x <= 0)
                y = 1;
            else
                if (0 < x && x <= R)
                    y = -sqrt(R * R - x * x);
                else
                    if (R < x && x <= 2 * R)
                        y = sqrt(R * R - (x - R) * (x - R));
                    else
                        y = -(x - 2 * R) / (6 - 2 * R) - 1;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;

    return 0;
}