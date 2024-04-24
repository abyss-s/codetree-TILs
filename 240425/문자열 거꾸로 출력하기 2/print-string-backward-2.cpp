#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for (int j = str.length() - 1; j >= 0; j--) {
      cout << str[j];
    }
    cout << endl;
  }

  return 0;
}