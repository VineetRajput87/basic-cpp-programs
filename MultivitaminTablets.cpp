// Q.:- The doctor prescribed Vineet to take a multivitamin tablet 3 times a day for the next X days.
//     Vineet already has Y multivitamin tablets.
//     Determine if Vineet has enough tablets for these X days
//     or not.

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
	    if((a*3)<=b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
