// Q.:- Vineet wants to gift C chocolates to Botswal on his birthday. However, he has only X chocolates with him. The cost of 1 chocolate is Y rupees. Find the minimum money in rupees Chef needs to spend so that he can gift C chocolates to Botswal.

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
	    cout<<(a-b)*c<<endl;
	}
	return 0;
}
