#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sum = 0;
	int cnt=0;
	while (true) {
		double n;
		cin >> n;
		if (n > 29 || n < 20) break;
		sum += n;
		cnt++;
	}
	cout << setprecision(2) << fixed << sum / cnt;
	return 0;
}