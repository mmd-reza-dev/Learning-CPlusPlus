#include <algorithm>
#include <iostream>
#include <ranges>
using namespace std;

int reverse(int );
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    reverse(number);
}

int reverse(int number) {
    while (number != 0) {
        cout << number % 10;
        reverse(number/10);
    }
}
