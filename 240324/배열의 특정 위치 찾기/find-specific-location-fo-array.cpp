#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    int total1 = 0; double total2 = 0.0;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        if (i % 2 == 1) 
            total1 += a;
        if(i % 3 == 2)
            total2 += a;
    }
    double mean = total2 / 3;
    cout << total1 << " " << fixed << setprecision(1) << mean << endl;
    return 0;
}