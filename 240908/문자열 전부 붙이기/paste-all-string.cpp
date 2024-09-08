#include <iostream>
using namespace std;

int main() {
  // 실행속도 높이기
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  string str = "";

  while (n--) {
    string str2;
    cin >> str2;
    str += str2;
  }

  cout << str;

  return 0;
}