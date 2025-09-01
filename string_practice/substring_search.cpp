#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string substring;

    cout << "Enter the text (max 2000 characters): ";
    getline(cin, text);  // گرفتن کل خط به عنوان متن

    if (text.length() > 2000) {
        text = text.substr(0, 2000); // حداکثر 2000 کاراکتر
    }

    cout << "Enter the substring to search: ";
    getline(cin, substring);

    int pos = text.find(substring);

    if (pos != string::npos) {
        cout << "Substring found at position: " << pos << endl;
    } else {
        cout << "!Not found" << endl;
    }

    return 0;
}
