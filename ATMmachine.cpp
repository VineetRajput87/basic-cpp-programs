// Q.:- There is an ATM machine. Initially, it contains a total of KK units of money. NN people (numbered 1 through NN) want to withdraw money; for each valid i, the i-th person wants to withdraw A_i units of money.
// The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

// For each person, determine whether they will get the required amount of money or not.


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
	    int c;
	    for(int i=0 ; i<a ; i++)
	    {
	        cin>>c;
	        if(c>b)
	        cout<<0;
	        else
	        {
	            cout<<1;
	            b=b-c;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
