#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << setprecision(2) << fixed << (a + b) / (a - b);
    return 0;
}