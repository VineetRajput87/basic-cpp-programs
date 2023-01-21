// Q.:- Vineet got his dream seat in F1 and secured a 3rd place in his debut race. He now wants to know the time gap between him and the winner of the race.

// You are his Vineet engineer and you only know the time gap between Vineet and the runner up of the race, given as A seconds, and the time gap between the runner up and the winner of the race, given as B seconds.

// Please calculate and inform Vineet about the time gap between him and the winner of the race.

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
	    cout<<a+b<<endl;
	}
	return 0;
}
