// Q.:- In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB, and NC soldiers respectively. You are given that an army with X soldiers can defeat an army with Y soldiers only if X>Y.
//     An army is said to be dominant if it can defeat both the other
//     armies combined. For example, kingdom C's army will be
//     dominant only if  NC>NA+NB.
//     Determine whether any of the armies is dominant or not.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cout<<"Enter the value of A, B and C : ";
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	    if(a>(b+c))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	    else if(a<b && b>c)
	    {
	    if(b>(a+c))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	    else
	    {
	    if(c>(a+b))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;  
	    }
	}
	return 0;
}
