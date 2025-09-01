#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int id;
    float grade;
    int age;
};

int main() {
    const int n = 3;
    student student[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter student name: ";
        cin.ignore(); // پاک کردن \n باقی‌مانده
        getline(cin, student[i].name);

        cout << "Enter student id: ";
        cin >> student[i].id;

        cout << "Enter student grade: ";
        cin >> student[i].grade;

        cout << "Enter student age: ";
        cin >> student[i].age;

        cout << "\n\n\n";
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += student[i].grade;
    }

    float avg = sum / n;
    cout << "Average grade: " << avg << endl;

    cout << "Students above average:" << endl;
    for (int i = 0; i < n; i++) {
        if (student[i].grade > avg) {
            cout << student[i].name << endl;
        }
    }

    cout << "Students with grade below 14:" << endl;
    for (int i = 0; i < n; i++) {
        if (student[i].grade < 14) {
            cout << student[i].name << endl;
        }
    }
}
