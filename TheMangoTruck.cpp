// Q.:- You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms.
//     Find the maximum number of mangoes you can load in the truck 
//     so that you can cross the bridge safely.
 
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,i=1;
	    cin>>a>>b>>c;
	    while(((i*a)+b)<=c)
	    {
	        i++;
	    }
	    i-=1;
	    cout<<i<<endl;
	}
	return 0;
}
