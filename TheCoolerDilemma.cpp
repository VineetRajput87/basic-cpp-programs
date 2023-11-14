// Q.:- Summer is at its peak in Iceland. Vineet is planning to purchase a water cooler to keep his room cool. He has two options available:

// 1. Rent a cooler at the cost of X coins per month.
// 2. Purchase a cooler for Y coins.
// Given that the summer season will last for M months in Iceland,
// help Chef in finding whether he should rent the cooler or not. 

// Vineet rents the cooler only if the cost of renting the cooler is
// strictly less than the cost of purchasing it. Otherwise, he
// purchases the cooler.

// Print YES if Vineet should rent the cooler, otherwise print NO.

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
	    if((a*c)<b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
