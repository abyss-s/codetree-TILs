#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str; 
    int y, m, d;
    char dash;
    cin >> str;
    stringstream ss(str);
    ss >> m >> dash >> d >> dash >> y;
    cout << y << "." << m << "." << d;
    return 0;
}