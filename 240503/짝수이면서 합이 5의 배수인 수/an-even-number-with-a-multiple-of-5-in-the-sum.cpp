#include <iostream>
#include <string>
using namespace std;

bool IsMagicNumber(int n) {
  int temp = n; // n이 0이 되므로 temp에 저장해두어야 함
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
    if (n == 0)
      break;
  }
  return temp % 2 == 0 && sum % 5 == 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (IsMagicNumber(n))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}