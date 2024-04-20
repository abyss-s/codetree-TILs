#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str; 
    int a, b, c;
    char dash;
    cin >> str;
    stringstream ss(str);
    ss >> a >> dash >> b >> dash >> c;
    cout << "010" << "-" << c << "-" << b;
    return 0;
}