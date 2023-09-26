#include<iostream>
using namespace std;

int main()
{
    int n,unit_digit_1,unit_digit_2,unit_digit_3;
    cout<<"Enter a number : ";
    cin>>n;
    unit_digit_1=n%10;
    n=n/10;
    unit_digit_2=n%10;
    n=n/10;
    unit_digit_3=n%10;
    
    if(((unit_digit_3*10+unit_digit_2)*10+unit_digit_1)%8==0)
        cout<<"The given number is divisible by 8"<<endl;
    else
        cout<<"The given number is not divisible by 8"<<endl;
    return 0;
}