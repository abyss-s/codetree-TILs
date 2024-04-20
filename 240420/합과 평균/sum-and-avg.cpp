#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << a+b <<" " << setprecision(1) << fixed << (a + b) / 2;
    return 0;
}