// Q.:- A single car can accommodate at most 4 people.
// N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%4==0)
	    cout<<a/4<<endl;
	    else
	    cout<<(a/4)+1<<endl;
	}
	return 0;
}
