#include <iostream>
using namespace std;

// 문자열 A에 서로 다른 알파벳의 수가 2개 이상이라면 참을 리턴
int isSameAlpabetinString(string str) {
  bool alpabets[26] = {false};
  int count = 0;
  for (char ch : str) {
    int i = ch - 'a';
    if (!alpabets[i]) {
      alpabets[i] = true;
      count++;
      if (count >= 2)
        return true;
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string word;
  cin >> word;

  if (isSameAlpabetinString(word))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}