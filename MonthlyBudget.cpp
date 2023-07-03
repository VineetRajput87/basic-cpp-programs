// Q.:- Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.
#include <iostream>
using namespace std;
int main() 
{
	int t; 
	cout<<"how many times do you want to continue : ";
	cin>>t;
	while(t--)
	{ 
	    int a,b;
	    cout<<"Enter A and B : ";
	    cin>>a>>b;
	    if(a>=(b*30))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

