#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> v;  // 동적 배열

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string command;
    int a;
    cin >> command;
    if (command == "push_back") {
      cin >> a;
      v.push_back(a);
    } else if (command == "get") {
      cin >> a;
      cout << v[a - 1] << endl;
    } else if (command == "size") {
      cout << v.size() << endl;
    } else if (command == "pop_back") {
      v.pop_back();
    }
  }

  return 0;
}