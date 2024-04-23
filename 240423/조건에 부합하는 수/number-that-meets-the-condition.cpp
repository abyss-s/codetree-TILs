#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1 || i %4 ==0) 
			if((i/8)%2==1)
				if((i % 7) >= 4 ) cout << i << " ";
	}
	return 0;
}