#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, x1, x2, d, real, imaginary;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if (d> 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "有两不同的实根：" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0) {
        cout << "有两相同实根：" << endl;
        x1 = (-b + sqrt(d)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else {
        real = -b/(2*a);
        imaginary =sqrt(-d)/(2*a);
        cout << "有两虚根："  << endl;
        cout << "x1 = " << real << "+" << imaginary << "i" << endl;
        cout << "x2 = " << real << "-" << imaginary << "i" << endl;
    }
    return 0;
}
