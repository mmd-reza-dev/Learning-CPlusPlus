#include <iostream>
using namespace std;
int main()
{
    int num[10];
    for(int i=0; i<10; i++)
    {
        cout<<"enter num["<<i<<"]: ";
        cin>>num[i];
    }
    for(int i=0; i<10; i++)
        if(num[i] % 2 != 0)
            cout<<num[i]<<"\t";
    for(int i=0; i<10; i++)
        if(num[i] % 2 == 0)
            cout<<num[i]<<"\t";
    return 0;
}
