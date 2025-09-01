#include <iostream>
using namespace std;
int main()
{
    int num[10], temp;
    for(int i=0; i<10; i++)
    {
        cout<<"enter num["<<i<<"]: ";
        cin>>num[i];
    }
    for(int i=0; i<5; i++)
    {
        temp = num[i];
        num[i] = num[9-i];
        num[9-i] = temp;
    }
    for(int i=0; i<10; i++)
            cout<<num[i]<<"\t";
    return 0;
}
