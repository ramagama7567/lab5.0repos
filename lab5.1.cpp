// Lab_05_1.cpp
// ������� �����
// ����������� ������ � 5.1
// �������, �� ������ ������������ �����
// ������ 11

#include <iostream>
#include <cmath>
using namespace std;

double g(const double a, const double b); // ��������

int main()
{
    double s, t; // ����� ���������
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double umova1 = g(1, s) + pow(1 + pow(g(t, 1), 2), 2);   // ���������
    double umova2 = 1 + pow(g(s + t, 1), 3);           // ���������

    double result = umova1 / umova2;                   // ���������

    cout << "result = " << result << endl;

    return 0;
}

// ���������� ������� g(a, b)
double g(const double a, const double b)
{
    return a * a + a * b + b * b;
}
