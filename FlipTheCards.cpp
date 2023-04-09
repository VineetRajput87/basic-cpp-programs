// Q.:- There are N cards on a table, out of which X cards are face-up and the remaining are face-down.

// In one operation, we can do the following:
// Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
// What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?

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
		
	    if(b==0||b==a)
	    cout<<"0"<<endl;
	    else if((a/2)<b)
	    cout<< a-b <<endl;
	    else
	    cout<<b<<endl;
	}
	return 0;
}
