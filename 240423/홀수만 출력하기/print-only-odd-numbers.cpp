#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[10];
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 2 == 1 && arr[i]!=0) cout << arr[i] << "\n";
	}
	return 0;
}