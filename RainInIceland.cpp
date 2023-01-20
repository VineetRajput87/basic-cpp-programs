//Q.:-  In Iceland, precipitation is measured using a rain gauge in millimetre per hour.

// Vineet categorises rainfall as:

// 1. LIGHT, if rainfall is less than 3 millimetre per hour.
// 2. MODERATE, if rainfall is greater than equal to 3 millimetre per hour and less than 7 millimetre per hour.
// 3. HEAVY if rainfall is greater than equal to 7 millimetre per hour.

// Given that it rains at X millimetre per hour on a day, 
// find whether the rain is LIGHT, MODERATE, or HEAVY.

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
	    if(a<3)
	    cout<<"LIGHT"<<endl;
	    else if(a>=3 && a<7)
	    cout<<"MODERATE"<<endl;
	    else
	    cout<<"HEAVY"<<endl;
	}
	return 0;
}
