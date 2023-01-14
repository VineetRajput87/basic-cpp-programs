// Q.:- Vineet was driving on a highway at a speed of X km/hour.

//      To avoid accidents, there are fine imposed on overspeeding as
//      follows:

// 1. No fine if the speed of the car  ≤ 70 km/hour.
// 2. Rs 500 fine if the speed of the car is strictly greater than
// 70 and ≤ 100.
// 3. Rs 2000 fine if the speed of the car is strictly greater than 100.
// Determine the fine Vineet needs to pay.

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
	    if(a<=70)
	    cout<<0<<endl;
	    else if(a>70 && a<=100)
	    cout<<500<<endl;
	    else
	    cout<<2000<<endl;
	}
	return 0;
}
