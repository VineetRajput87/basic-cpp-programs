// Q.:- Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
// Find the minimum number of pizzas they should order to satisfy their appetite.
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
	    if((a*b)%4==0)
	    cout<<(a*b)/4<<endl;
	    else
	    cout<<((a*b)/4)+1<<endl;
	}
	return 0;
}
