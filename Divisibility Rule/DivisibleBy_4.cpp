#include<iostream>
using namespace std;

int main()
{
    int n,l1,l2;
    cout<<"Enter a number : ";
    cin>>n;
    l1=n%10;
    n=n/10;
    l2=n%10;
    l1=l2*10+l1;
    if(l1%4==0)
        cout<<"The given number is divisible by 4"<<endl;
    else
        cout<<"The given number is not divisible by 4"<<endl;
    return 0;
}