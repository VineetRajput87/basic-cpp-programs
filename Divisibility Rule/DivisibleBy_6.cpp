#include<iostream>
using namespace std;

int main()
{
    int n,last_digit,l1,sum=0,k;
    cout<<"Enter a number : ";
    cin>>n;
    last_digit=n%10;
    while (n>0)
    {
        l1=n%10;
        sum+=l1;
        n=n/10;
    }
    if(sum%3==0 && last_digit%2==0)
        cout<<"The given number is divisible by 6"<<endl;
    else
        cout<<"The given number is not divisible by 6"<<endl;
    return 0;
}