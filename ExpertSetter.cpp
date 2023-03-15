// Q.:- A problem setter is called an expert if at least 50% of their problems are approved by Vineet.
//     Munchy submitted X problems for approval. If Y problems out
//     of those were approved, 
//     find whether Munchy is an expert or not.

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
	    if(b>=a/2.0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
