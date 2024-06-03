#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int numbers[10];
  int count = 0;
  int sum = 0;
  double average;

  for (int i = 0; i < 10; ++i) {
    int num;
    cin >> num;
    if (num == 0) {
      break;
    }
    numbers[count++] = num;
  }

  if (count > 0) {
    for (int i = 0; i < count; ++i) {
      sum += numbers[i];
    }
    average = static_cast<double>(sum) / count;
  } else {
    sum = 0;
    average = 0.0;
  }

  cout << sum << " " << fixed << setprecision(1) << average << endl;

  return 0;
}