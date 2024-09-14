#include <iostream>
#include <list>
using namespace std;

// list STL 사용 연습하기
int main() {
  long long n;
  cin >> n;
  list<long long> dbl_list;

  while (n--) {
    string command;
    long long a;
    cin >> command;

    if (command == "push_front") {
      cin >> a;
      dbl_list.push_front(a);
    }
    else if (command == "push_back") {
      cin >> a;
      dbl_list.push_back(a);
    } else if (command == "pop_front") {
      long long tmp = dbl_list.front();
      cout << tmp << "\n";
      dbl_list.pop_front();
    } else if (command == "pop_back") {
      long long tmp = dbl_list.back();
      cout << tmp << "\n";
      dbl_list.pop_back();
    } else if (command == "size")
      cout << dbl_list.size() << "\n";
    else if (command == "empty") {
      if (dbl_list.size() == 0)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    } else if (command == "front")
      cout << dbl_list.front() << "\n";
    else if (command == "back") {
      cout << dbl_list.back() << "\n";
    }
  }
}