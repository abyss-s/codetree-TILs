#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double a;
  cin >> a;
  if (a >= 1.0)
    cout << "High";
  else if (a >= 0.5)
    cout << "Middle";
  else
    cout << "LOW";

  return 0;
}