// Q.:- Vineet's current rating is X, and he wants to improve it. It is generally recommended that a person with rating X should solve problems whose difficulty lies in the range [X,X+200], i.e, problems whose difficulty is at least X and at most X+200.
//     You find out that Vineet is currently solving problems with
//     a difficulty of Y. Is Vineet following the recommended
//     practice or not?

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cout<<"Enter A and B : ";
	    cin>>a>>b;
	    if(b>=a && b<=(a+200))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
