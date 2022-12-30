// Q.:- There are only 2 type of denominations in Vineetland:
//     Coins worth 1 rupee each
//     Notes worth 10 rupees each
//     Vineet wants to pay his friend exactly X rupees. What is
//     the minimum number of coins Vineet needs to pay exactly X
//     rupees?

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
	    cout<<"How much money does vineet want to pay : ";
	    cin>>a;
	    cout<<a%10<<endl;
	}
	return 0;
}
