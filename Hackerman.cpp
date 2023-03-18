// Q.:- Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

// The game proceeds as follows:

// First, Alice throws a die and gets the number A
// Then, Bob throws a die and gets the number B
// Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
// Given A and B, determine who wins the game.


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,temp,i;
	    cin>>a>>b;
	    for(i =2 ; i<=((a+b)/2) ; i++)
	    {
	        if((a+b)%i==0)
	        break;
	        else
	        continue;
	    }
	    if(i>((a+b)/2))
		    
	    cout<<"Alice"<<endl;
	    else
	    cout<<"Bob"<<endl;
	}
	return 0;
}
