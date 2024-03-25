#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a;
  cin >> a;
  cout << setprecision(1) << fixed << 30.48*a;

  return 0;
}