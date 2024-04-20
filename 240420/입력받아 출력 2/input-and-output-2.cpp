#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str; 
    int a, b;
    char dash;
    cin >> str;
    stringstream ss(str);
    ss >> a >> dash >> b;
    cout << a << b;
    return 0;
}