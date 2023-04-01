// Q.:- Vineet hosts a party for his birthday. There are N people at the party. All these N people decide to play Jenga.

// There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.
// The game is valid if:
// 1. All the players have a tile in each round;
// 2. All the tiles are used at the end.
// Given N and X, find whether the game is valid.

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
	    if(b%a==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
