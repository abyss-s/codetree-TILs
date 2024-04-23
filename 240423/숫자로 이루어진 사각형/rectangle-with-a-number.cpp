#include <iostream>
using namespace std;

void print(int n) {
	int a=1;
	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a << " ";
			a++;
			if (a > 9) a = 1;
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	print(n);
	return 0;                                 
}