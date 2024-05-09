#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  if (a > b)
    cout << a + 25 << " " << b * 2;
  else
    cout << a * 2 << " " << b + 25;
  

  return 0;
}