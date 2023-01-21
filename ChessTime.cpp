// Q.:- Vineet has recently started playing chess, and wants to play as many games as possible.

// He calculated that playing one game of chess takes at least 20 minutes of his time.

// Vineet has N hours of free time. What is the maximum number of complete chess games he can play in that time?

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    cout<<(a*60)/20<<endl;
	}
	return 0;
}
