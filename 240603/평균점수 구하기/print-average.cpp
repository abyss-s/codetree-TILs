#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double sum = 0;
  for (int i = 0; i < 8; i++) {
    double n;
    cin >> n;
    sum += n;
  }

  cout << setprecision(1) << fixed << sum / 8 << endl;

  return 0;
}