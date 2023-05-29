// Q.:- There are three friends and a total of N candies.
//      There will be a fight amongst the friends if all of them do
//      not get the same number of candies.
//      Vineet wants to divide all the candies such that there is no 
//      fight. Find whether such distribution is possible.
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
	    if(a%3==0)
	    cout<<"YES"<<endl; 
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
