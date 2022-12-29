// Q.:- Bob has X rupees and goes to a market. The cost of apples is Rs. A per kg and the cost of oranges is Rs. BB per kg. Determine whether he can buy at least 1 kg each of apples and oranges.

#include <iostream>
using namespace std;
int main()
{
    int X,A,B;
    cout<<"Enter the money that Bob has : ";
    cin>>X;
    cout<<"Enter the rate of apples and oranges per kg : ";
    cin>>A>>B;
    if((A+B)<=X)
    cout<<"YES, Bob can buy them."<<endl;
    else
    cout<<"NO, Bob cannot buy them."<<endl;
	return 0;
}
