#include <iostream>
using namespace std;

int main() {
	int a,b;
	char aa, bb;
	cin >> a>>aa >>b>>bb;

	if (a >= 19 || b >= 19) 
		if(aa == 'M' || bb == 'M') cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}