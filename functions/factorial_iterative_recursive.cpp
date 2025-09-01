#include <algorithm>
#include <iostream>
#include <ranges>
using namespace std;

int fact(int );
int recursiveFact(int );

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << fact(number);
    cout << endl;
    cout << recursiveFact(number);
    return 0;
}

int fact(int number) {
    int result = 1;
    if (number == 0)
        return 1;

    else {
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        return result;
    }
}

int recursiveFact(int number) {
    if (number == 0)
        return 1;
    else {
        return number* recursiveFact(number - 1);
    }

}
