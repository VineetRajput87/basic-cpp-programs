// Vineet prepared a problem. The admin has rated this problem for x points.
// A problem is called :

// Easy if 1 ≤ x < 100
// Medium if 100 ≤ x < 200
// Hard if 200 ≤ x ≤ 300

// Find the category to which Vineet's problem belongs.

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a;
	    cout<<"Enter the value of X : ";
	    cin>>a;
	    if(1<=a && a<100)
	    cout<<"Easy"<<endl;
	    else if(100<=a && a<200)
	    cout<<"Medium"<<endl;
	    else if(200<=a && a<=300)
	    cout<<"Hard"<<endl;
	}
	return 0;
}
