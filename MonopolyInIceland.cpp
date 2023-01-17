// Q.:- Vineet is the financial incharge of Iceland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

// There are exactly 3 companies in the market each of whose
// revenues are denoted by R1, R2 and R3 respectively.

// A company is said to have a monopolistic advantage if its
// revenue is strictly greater than the sum of the revenues of its
// competitors.

// Given the revenue of the 3 companies, help Vineet determine if
// any of them has a monopolistic advantage.

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
	    if((a+b)<c || (b+c)<a || (a+c)<b)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
