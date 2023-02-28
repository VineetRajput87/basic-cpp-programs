// Q.:- There are N different types of colours numbered from 1 to N. Vineet has A_i balls having colour i,( 1 ≤ i ≤ N ).
// Vineet will arrange some boxes and put each ball in exactly one of those boxes.

// Find the minimum number of boxes Vineet needs so that no box contains two balls of same colour.

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,x=0;
	    cin>>a;
	    int brr[a];
	    for(int i=0;i<a; i++)
	    {
	        cin>>brr[i];
	        if(brr[i]>x)
	        x=brr[i];
	    }
	    cout<<x<<endl;
	}
	return 0;
}
