#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (b != 0)
    cout << a << " / " << b << " = " << a / b << endl;
  cout << a << " * " << b << " = " << a * b << endl;

  return 0;
}