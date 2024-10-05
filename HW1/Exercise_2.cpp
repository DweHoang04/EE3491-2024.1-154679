#include <iostream>

using namespace std;

int main() {
    int a, b, c, num;
    cout << "Enter the digits: ";
    cin >> a >> b >> c;
    num = a * 100 + b * 10 + c;
    cout << "The number is: " << num << endl;

    return 0;
}