// Q.:-In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:
//     1. Top 10 participants receive rupees X each.
//     2. Participants with rank 11 to 100 (both inclusive) receive
//     rupees Y each.
//     Find the total prize money over all the contestants.

#include <iostream>
using namespace std;
int main()
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cout<<"Enter money received by top 10 participants : ";
	    cin>>a;
	    cout<<"Enter money received by 11 to 100 rank participants : ";
	    cin>>b;
		
	    cout<<(a*10)+(b*90)<<endl;
	}
	return 0;
}
