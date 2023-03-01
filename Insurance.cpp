// Q.:- Vineet bought car insurance. The policy of the insurance is:

//     The maximum rebatable amount for any damage is Rs X lakhs.
//     If the amount required for repairing the damage is ≤ X lakhs, that amount is rebated in full.
//     Vineet's car meets an accident and required Rs Y lakhs for
//     repairing.
//     Determine the amount that will be rebated by the insurance
//     company.

#include <iostream>
using namespace std;
int main() 
{
	    int a,b;
	    cout<<"Enter the value of X and Y : ";
	    cin>>a>>b;
	    if(a>b)
	    cout<<"He will get : "<<b<<endl;
	    else
	    cout<<"He will get : "<<a<<endl;
	return 0;
}
