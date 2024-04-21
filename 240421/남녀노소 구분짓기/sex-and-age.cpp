#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a == 1) {
		if (b < 19) cout << "GIRL";
		else cout << "WOMAN";
	}
	else
		if (b < 19) cout << "BOY";
		else cout << "MAN";
	return 0;
}