// Q.:- Vineet is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. Vineet wants to change the volume from X to Y. Find the minimum number of button presses required to do so.

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
	    if(a>b)
	    cout<<a-b<<endl;
	    else
	    cout<<b-a<<endl;
	}
	return 0;
}
