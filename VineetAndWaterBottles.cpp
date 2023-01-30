// Q.:- Vineet has N empty bottles where each bottle has a capacity of X litres.
// There is a water tank in Chefland having K litres of water. Vineet wants to fill the empty bottles using the water in the tank.

// Assuming that Vineet does not spill any water while filling the bottles, find out the maximum number of bottles Vineet can fill completely.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k;
        cin>>n>>x>>k;
        if(x>k)
        cout<<0<<endl;
        else if(k/x<n)
        cout<<k/x<<endl;
        else if(k/x>n)
        cout<<n<<endl;
	}
	return 0;
}
