// Q.:- Alice and Bob are very good friends and they always distribute all the eatables equally among themselves.

// Alice has A chocolates and Bob has B chocolates. Determine whether Alice and Bob can distribute all the chocolates equally among themselves.

// Note that:
// It is not allowed to break a chocolate into more than one piece.
// No chocolate shall be left in the distribution.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if((a+b)%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
