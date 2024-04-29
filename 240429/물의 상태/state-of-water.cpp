#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (n < 0)
    cout << "ice";
  else if (n >= 100)
    cout << "vapor";
  else
    cout << "water";

  return 0;
}