// Q.:- Vineet participated in a contest and got a rank X.

// Vineet is trying to find his name in the ranklist but there are too many pages.

// Each page consists of 25 participants. Vineet wants to find the exact page number which contains his name.
// Help Vineet find the page number. 
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%25==0)
	    cout<<a/25<<endl;
	    else if(a>25)
	    cout<<(a/25)+1<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
