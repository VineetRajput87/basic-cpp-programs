// Q.:- Vineet categorises an instagram account as spam, if, the following count of the account is more than 10 times the count of followers.Given the following and follower count of an account as X and Y respectively, find whether it is a spam account.

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
	    if(a>b*10)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
