#include <iostream>
using namespace std;

void printAscending(int n) {
  if (n > 0) {
    printAscending(n - 1); 
    cout << n << " ";
  }
}

void printDescending(int n) {
  if (n > 0) {
    cout << n << " ";
    printDescending(n - 1);
  }
}

int main() {
  int n;
  cin >> n;

  printAscending(n);
  cout << endl;
  printDescending(n);

  return 0;
}