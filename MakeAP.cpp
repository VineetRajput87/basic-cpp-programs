// Q.:- Vineet is given two integers A and C such that A ≤ C.

// Vineet wants to find whether there exists any integer B such that 
// A,B, and C are in arithmetic progression.

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
	    cout<<(a+b)/2<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
