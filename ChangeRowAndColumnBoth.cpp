// Q.:- There is a 10×10 grid with rows numbered 1 to 10 from top to bottom, and columns 1 to 10 from left to right. Each cell is identified by a pair (r,c) which means that the cell is located at row r and column c.
// If Vineet's current location is (a,b), then in one move Vineet can go to (c,d) if both of the following are satisfied:
// 1. a!=c
// 2. b!=d
// Determine the minimum number of moves required to go from (s_x,s_y) to (e_x,e_y) .
 
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==c || b==d)
	    cout<<2<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
