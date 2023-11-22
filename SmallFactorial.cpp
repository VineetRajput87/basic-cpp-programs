// Q.:- Write a program to find the factorial value of any number entered by the user.
 
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,i,temp=1;
	    cin>>a;
	    for(i=a;i>0;i--)
	    {
	        temp=temp*i;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
