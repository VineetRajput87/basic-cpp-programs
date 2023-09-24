#include<iostream>
using namespace std;

int main()
{
    int n,reminder;
    cout<<"Enter a number : ";
    cin>>n;
    reminder=n%10;
    if(reminder%2==0)
        cout<<"The given number "<<n<<" is divisible by 2"<<endl;
    else
        cout<<"The given number "<<n<<" is not divisible by 2"<<endl;
    return 0;
}