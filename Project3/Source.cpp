#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int summa(int a, int b) {

    if (b == a - 1) return 0;
    return b + summa(a, b - 1);
}

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "¬ведите 1-ое число: ";
    cin >> a;
    cout << "¬ведите 2-ое число: ";
    cin >> b;

    cout << summa(a, b);

    return 0;
}
