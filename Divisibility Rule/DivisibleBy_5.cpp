#include<iostream>
using namespace std;

int main()
{
    int n,last_digit;
    cout<<"Enter a number : ";
    cin>>n;
    last_digit = n%10;
    if(last_digit%5==0)
        cout<<"The ginve number is divisible by 5"<<endl;
    else
        cout<<"The ginve number is not divisible by 5"<<endl;
    return 0;
}
