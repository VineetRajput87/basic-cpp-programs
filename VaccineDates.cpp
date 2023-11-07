// Q.:- Vineet has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose.
//     Determine if Chef is too early, too late, or in the correct
//     range for taking his second dose. 

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
	    cout<<"Enter the D,L and R : ";
	    cin>>a>>b>>c;
	    if(a<=c && a>=b)
	    cout<<"Take second dose now"<<endl;
	    else if(a>c)
	    cout<<"Too Late"<<endl;
	    else
	    cout<<"Too Early"<<endl;
	}
	return 0;
}
