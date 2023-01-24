// Q.:- In a coding contest, there are two types of problems:

// 1. Easy problems, which are worth 1 point each
// 2. Hard problems, which are worth 2 points each

// To qualify for the next round, a contestant must score at least
// X points. 
// Vineet solved A Easy problems and B Hard problems. Will Vineet qualify or not?

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
	    if((b+(c*2))>=a)
	    cout<<"Qualify"<<endl;
	    else
	    cout<<"NotQualify"<<endl;
	}
	return 0;
}
