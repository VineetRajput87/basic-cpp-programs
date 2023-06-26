// Q.:- Bob has an account in the Bobby Bank. His current account balance is W rupees.
// Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.
// Y rupees is deducted from Bob's account each month as bank charges.
// Find his final account balance after Z months. Note that the account balance can be negative as well.
#include <iostream> 
using namespace std; 

int main() 
{
	int t;
	cin>>t; 
	while(t--) 
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<(a+((b-c)*d))<<endl;
	}
	return 0;
}

