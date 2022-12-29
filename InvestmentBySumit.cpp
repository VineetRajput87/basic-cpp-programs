// Q.:-Sumit has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum. 
//     An investment is called good if and only if the interest 
//     rate of the investment is at least twice of the inflation 
//     rate.
//     Determine whether the investment made by Sumit is good or 
//     not.

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cout<<"Enter how many time do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cout<<"Enter the value of X and Y : ";
	    cin>>a>>b;
	    if(a>=2*b)
	    cout<<"YES, The investment is good."<<endl;
	    else
	    cout<<"NO, The investment is not good."<<endl;
	}
	return 0;
}
