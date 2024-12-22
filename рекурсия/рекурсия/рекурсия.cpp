#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
double x;
int n;

double fac(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++) res = res * i;
    return res;
}

double f(int n, double x)
{
    if (n == 0) return 1;
    if (n == 1) return  2 * (x / 2) + f(n-1,x);
    return ((pow(n, 2) + 1) / fac(n)) * pow(x / 2, n) + f(n - 1, x);
}
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите x: ";
    cin >> x;
    while (n < 0) {
        cout << "Введите положительное n: ";
        cin >> n;
    }
    cout << "Результат: " << f(n, x);
    return 0;
}
