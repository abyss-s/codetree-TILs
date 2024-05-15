#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;

  double arr[100];
  double sum_val = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum_val += arr[i];
  }

  double aver = sum_val / n;
  cout << fixed << setprecision(1) << aver << endl;
  if (aver >= 4.0)
    cout << "Perfect";
  else if (aver >= 3.0)
    cout << "Good";
  else
    cout << "Poor";
  return 0;
}