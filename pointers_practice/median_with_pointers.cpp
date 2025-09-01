#include <iostream>
#include <cstdlib>
using namespace std;
void input (int*, int);
void output (int*, int);
void bubble (int*, int);
void median (int*, int, float*);
int main ()
{
int* ptr_arr, n;
float mead;
cout<<"Enter number of items :";
cin>>n;
ptr_arr = new int[n];
if (!ptr_arr)
{
cout<<" Allocation failure!";
cin.get ();
exit (1);
}
input (ptr_arr, n);
bubble (ptr_arr, n);
system ("cls");
cout<<"\n Sorted data are:";
output (ptr_arr, n);
median (ptr_arr, n, &mead);
cout<<"\n Median = "<<mead;
delete[] ptr_arr;
cout<<endl;
return 0;
}//end of main function
void input (int* p, int n)
{
for(int i=0; i<n; i++)
{
cout<<"Enter number "<< (i + 1)<<": ";
cin>>*(p + 1);
}
}
void bubble (int* ptr_arr, int len)
{
int i, j, temp;
for (i=len-1; i>0; i--)
for (j=0; j<i; j++)
if (*(ptr_arr + j) > *(ptr_arr + j + 1))
{
temp = *(ptr_arr + j);
*(ptr_arr + j) = *(ptr_arr + j + 1);
*(ptr_arr + j + 1) = temp ;
}//end of if
}
void median (int* p, int n, float* mead)
{
if(n & 2 == 0)
*mead = (float) (* (p+ ((n-1)/2))+*(p+(n/2))) / 2;
else
*mead = *(p+(n-1)/2);
}
void output (int* p, int n)
{
for(int i=0; i<n; i++)
cout<<*(p + i)<<" ";
}
