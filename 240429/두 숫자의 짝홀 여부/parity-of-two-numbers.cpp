#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  if (a % 2 == 0)
    cout << "even";
  else
    cout << "odd";
  if (b % 2 == 0)
    cout << "\neven";
  else
    cout << "\nodd";

  return 0;
}