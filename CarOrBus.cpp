// Q.:- Vineet wants to reach home as soon as possible. He has two options:
// Travel with his BIKE which takes X minutes.
// Travel with his CAR which takes Y minutes.
// Which of the two options is faster or do they both take same time?

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
	    cout<<"CAR"<<endl;
	    else if(b>a)
	    cout<<"BIKE"<<endl;
	    else
	    cout<<"SAME"<<endl;
	}
	return 0;
}
