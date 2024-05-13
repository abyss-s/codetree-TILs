#include <iostream>
using namespace std;

int main() {
  string str = "aaaaaaaaaa";
  for (int i = 0; i < 10; i++) {
    cin >> str[i];
  }
  for (int i = 9; i >= 0; i--) {
    cout << str[i];
  }

  return 0;
}