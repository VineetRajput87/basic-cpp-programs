#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0)
    {
        int rem = n%10;
        sum+=rem;
        n=n/10; 
    }
    if(sum%3==0)
        cout<<"The number is divisible by 3"<<endl;
    else 
        cout<<"The number is not divisible by 3"<<endl;
    return 0;
}