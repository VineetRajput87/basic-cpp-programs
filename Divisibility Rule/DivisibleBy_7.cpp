#include<iostream>
using namespace std;

int main()
{
    int n,Unit_digit;
    cout<<"Enter a number : ";
    cin>>n;
    Unit_digit=n%10;
    
    if(((n/10)-Unit_digit*2)%7==0)
        cout<<"The given number is divisible by 7"<<endl;
    else
        cout<<"The given number is not divisible by 7"<<endl;
    
    return 0;
}