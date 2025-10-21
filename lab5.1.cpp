// Lab_05_1.cpp
// Ксенжик Сергій
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;

double g(const double a, const double b); // прототип

int main()
{
    double s, t; // вхідні параметри
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double umova1 = g(1, s) + pow(1 + pow(g(t, 1), 2), 2);   // чисельник
    double umova2 = 1 + pow(g(s + t, 1), 3);           // знаменник

    double result = umova1 / umova2;                   // результат

    cout << "result = " << result << endl;

    return 0;
}

// визначення функції g(a, b)
double g(const double a, const double b)
{
    return a * a + a * b + b * b;
}
