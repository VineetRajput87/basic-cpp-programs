// Q.:- Vineet's bullet moves at X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does not move.

// Find the minimum time (in seconds) after which Vineet should shoot the bullet, such that it hits the goomba after at least Z seconds from now.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(Z-(Y/X)>=0)
	    cout<<Z-(Y/X)<<endl;
	    else if(Z-(Y/X)<0)
	    cout<<"0"<<endl;
	    
	}
	return 0;
}
