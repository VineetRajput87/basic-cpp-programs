// Q.:- Vineet is given three numbers A,B and C.

//      He wants to find whether he can select exactly two numbers
//      out of these such that the product of the selected numbers
//      is negative.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a*b)<0 || (b*c)<0 || (a*c)<0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
