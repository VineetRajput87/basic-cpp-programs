// Q.:- It's the sale season again and Vineet bought items worth a total of X rupees. The sale season offer is as follows:

// 1. if X ≤ 100, no discount.
// 2. if 100< X ≤1000, discount is 25 rupees.
// 3. if 1000< X ≤5000, discount is 100 rupees.
// 4. if X > 5000, discount is 500 rupees.
// Find the final amount Vineet needs to pay for his shopping.

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
	    if(a<=100)
	    cout<<a<<endl;
	    else if(a>100 && a<=1000)
	    cout<<a-25<<endl;
	    else if(a>1000 && a<=5000)
	    cout<<a-100<<endl;
	    else
	    cout<<a-500<<endl;
	}
	return 0;
}
