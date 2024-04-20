#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str; 
    int y, m, d;
    char dot;
    cin >> str;
    stringstream ss(str);
    ss >> y >> dot >> m >> dot >> d;
    cout << m << "-" << d << "-" << y;
    return 0;
}