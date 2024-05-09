#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return false;
      break;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str = "";
  cin >> str;
  if (isPalindrome(str))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}