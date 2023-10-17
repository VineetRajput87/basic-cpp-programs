//Q.:- Raj's dog binary hears frequencies starting from 67 Hertz to 45000 Hertz (both inclusive).
//    If Raj's commands have a frequency of X Hertz, find whether binary can hear them or not.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	float a;
	cout<<"How many times you want to repeat : ";
	cin>>t;
	while(t--)
	{
	    cout<<"Raj's command has a frequency of how many Hertz : ";
	    cin>>a;
	    if(a>=67 && a<=45000)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
