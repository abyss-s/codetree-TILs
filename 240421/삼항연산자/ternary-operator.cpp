#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	string str = a == 100 ? "pass" : "failure";
	cout << str;
	return 0;
}