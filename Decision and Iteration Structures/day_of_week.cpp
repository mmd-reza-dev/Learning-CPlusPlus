#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    switch (number) {
        case 1: cout << "saturday";
            break;
        case 2: cout << "sunday";
            break;
        case 3: cout << "monday";
            break;
        case 4: cout << "tuesday";
            break;
        case 5: cout << "wednesday";
            break;
        case 6: cout << "thursday";
            break;
        case 7: cout << "friday";
            break;
        default: cout << "error";
    }
    return 0;
}
