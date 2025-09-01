#include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    while(number != 0) {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 10)
            sum += number;

        if (number >=10) {
            int temp = number;
            while (temp != 0) {
                sum += temp % 10;
                temp = temp / 10;
            }
        }

    }
    cout << "Sum of input numbers: " <<sum;
}
