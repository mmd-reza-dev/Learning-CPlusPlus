#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string data;
    ofstream outfile("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    getline(cin, data);
    outfile << data << endl;

    cout << "Enter your age: ";
    getline(cin, data);
    outfile << data << endl;

    outfile.close();

    ifstream infile("afile.dat");
    cout << "Reading from the file" << endl;

    while (getline(infile, data)) {  // خواندن هر خط از فایل
        cout << data << endl;
    }

    infile.close();
    return 0;
}
