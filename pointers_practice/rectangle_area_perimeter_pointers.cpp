#include <iostream>
using namespace std;
int area(int *, int *);
int environment(int *, int *);
int main()
{
    int tool;
    int arz;
    int *p1 = &tool;
    int *p2 = &arz;
    cout << "Enter Tool:" << endl;
    cin >> tool;

    cout << "Enter Arz:" << endl;
    cin >> arz;

    cout << "area: "<< area(p1, p2) <<endl;
    cout << "mohit: "<< environment(p1, p2);
    return 0;
}
int area(int *p1, int *p2) {
    return *p1 * *p2;
}
int environment(int *p1, int *p2) {
    return 2*(*p1 + *p2);
}
