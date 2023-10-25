
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, ("RU"));
    int a, b, c, d, e, f, g;
    cin >> a>> b>> c>> d>> e>> f>> g;
    if (a > b && a > c && a > d && a > e && a > f && a > g) 
        cout << a << "max";
    if (b > a && b > c && b > d && b > e && b > f && b > g) 
        cout << b << "max";
    if (c > a && c > b && c > d && c > e && c > f && c > g)
        cout << c << "max";
    if (d > a && d > b && d > c && d > e && d > f && c > g)
        cout << d << "max";
    if (e > a && e > b && e > d && e > c && e > f && e > g)
        cout << e << "max";
    if (f > a && f > b && f > d && f > e && f > c && f > g)
        cout << f << "max";
    if (g > a && g > b && g > d && g > e && g > f && g > c)
        cout << c << "max";


    int a, ch1, ch2, ch3, ch4;
    cout << "введите четырёхзначное число:";
    cin >> a;
    ch1 = a / 1000;
    ch2 = (a / 100)%10;
    ch3 = (a % 100)/10;
    ch4 = a % 10;
    cout << ch1 << endl << ch2 << endl << ch3<<endl<<ch4<<endl;
    a = (ch2 * 1000) + (ch1 * 100) + (ch4 * 10) + ch3;
    cout << a;
}   