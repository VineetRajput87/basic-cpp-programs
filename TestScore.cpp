// Q.:- In a test, there are N problems, each carrying X marks.
// In each problem, Vineet either received X marks or 0 marks.
// Determine whether is it possible for Vineet to achieve exactly Y marks.

#include <iostream>
using namespace std; 

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c==0)
	    cout<<"YES"<<endl;
	    else if(c%b==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
