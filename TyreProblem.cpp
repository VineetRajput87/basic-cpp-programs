// Q.:- There are N bikes and M cars on the road.
// 1. Each bike has 2 tyres.
// 2. Each car has 4 tyres.
// Find the total number of tyres on the road.

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
	    cout<<a*2+b*4<<endl;
	}
	return 0;
}
