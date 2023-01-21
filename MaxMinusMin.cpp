// Q.:- Vineet is given 3 integers A,B, and C such that A<B<C.
//      Vineet needs to find the value of max(A,B,C)−min(A,B,C).

// Here max(A,B,C) denotes the maximum value among A,B,C while min(A,B,C) denotes the minimum value among A,B,C.

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
	    cout<<c-a<<endl;
	}
	return 0;
}
