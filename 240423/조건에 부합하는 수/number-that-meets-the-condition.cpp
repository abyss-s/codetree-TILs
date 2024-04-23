#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1 || i %4 ==0) 
			if(i /8 == 1 || i / 8 == 3 || i / 8 == 5 || i / 8 == 7)
				if(i % 7 == 4 || i % 7 == 5 || i % 7 == 6) cout << i << " ";
	}
	return 0;
}