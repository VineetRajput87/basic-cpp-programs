// Q.:- Vineet is hungry and wants to reach home.
//     Vineet can travel up to 5 kilometres on 1 litre of fuel on his 
//     motorcycle.
//     Currently, his motorcycle is filled with X litres of fuel and 
//     his home is Y kilometres away.
//     Determine whether Vineet can reach his home on his motorcycle 
//     or not.

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
	    if((a*5)>=b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
