#include <iostream>
using namespace std;

bool isSubsequence(int arrA[], int a, int arrB[], int b) {
  for (int start = 0; start <= a - b; start++) {
    bool match = true;
    for (int i = 0; i < b; ++i) {
      if (arrA[start + i] != arrB[i]) {
        match = false;
        break;  
      }
    }
    if (match)
      return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;  

  int arrA[100], arrB[100]; 

  for (int i = 0; i < a; i++) {
    cin >> arrA[i];
  }
  for (int i = 0; i < b; i++) {
    cin >> arrB[i];
  }

  if (isSubsequence(arrA, a, arrB, b)) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}