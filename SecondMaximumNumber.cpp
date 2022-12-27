// Q.:-Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cout<<"How many times do you want to continue : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the three numbers : ";
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a>=c)
        {
            if(b>=c)
            cout<<"The second-maximum number is : "<<b<<endl;
            else
            cout<<"The second-maximum number is : "<<c<<endl;
        }
        else if(b>=a && b>=c)
        {
            if(a>=c)
            cout<<"The second-maximum number is : "<<a<<endl;
            else
            cout<<"The second-maximum number is : "<<c<<endl;
        }
        else if(a>=b)
        {
            cout<<"The second-maximum number is : "<<a<<endl;
        }
        else
        cout<<"The second-maximum number is : "<<b<<endl;
    }
	return 0;
}
