// Q.:- There are N children and Vineet wants to give them 1 candy each. Vineet already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available.

// Determine the minimum number of candy packets Vineet must buy so that he is able to give 1 candy to each of the N children.

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
	    if(b>a)
	    cout<<0<<endl;
	    else
	    {
	        if((a-b)%4==0)
	        cout<<(a-b)/4<<endl;
	        else
	        cout<<(a-b)/4 + (1)<<endl;
	    }
	}
	return 0;
}
