#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int R, S, C, a, b, c;
    float P;
    P = 3.14;
    cout << "введите радиус:";
    cin >> R;
    S = P * (R * R);
    C = 2 * P * R;
    cout << S << endl;
    cout << C<< endl;


    int ch1, ch2, ch3, ch4, gd, sum;
    cout << "введите оценки за четверть:";
    cin >> ch1;
    cin >> ch2;
    cin >> ch3;
    cin >> ch4;
    sum = ch1 + ch2 + ch3 + ch4;
    cout << sum / 4;

}