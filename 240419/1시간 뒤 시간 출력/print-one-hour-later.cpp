#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string str;
  cin >> str;
  int h, m;
  stringstream ss(str);
  char colon;
  ss >> h >> colon >> m;

  if (h == 23) {
    h = 0;
  } else {
    h = h + 1;  
  }

  cout << h << ":" << m;

  return 0;
}