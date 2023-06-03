// Q.:- Vineet has finally got the chance of his lifetime to drive in the F1 tournament. But, there is one problem. Vineet did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.
//     Given the fastest finish time as X seconds and Vineet's
//     finish time as Y seconds, determine whether Chef will be
//     allowed to race in the main event or not.
//     Note that, Vineet will only be allowed to race if his finish
//     time is within 107% of the fastest finish time. 
#include <iostream>
using namespace std;

int main() 
{
	    int a,b;
	    cout<<"Enter the value of X and Y : "; 
	    cin>>a>>b;
	    if(b<=((a*107)/100)) 
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	return 0;
}
