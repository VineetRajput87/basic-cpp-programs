// Q, :- vineet is fond of burgers and decided to make as many burgers as possible.
// vineet has A patties and B buns. To make 1 burger, vineet needs 1 patty and 1 bun.
// Find the maximum number of burgers that vineet can make.
#include <iostream>
using namespace std;
int main() 
{
	int t,a,b;
    cout<<"How many time you want to continue : ";
	cin>>t;
	while(t--)
	{   
        cout<<"Enter the count of petty and bun : ";
	    cin>>a>>b;
	    if(a<=b)
	    cout<<"Vineet can make at most "<<a<<"burgers"<<endl;
	    else if(b<a)
	    cout<<"Vineet can make at most "<<b<<"burgers"<<endl;
	    else
	    cout<<"Vineet can make at most "<<a<<" burgers"<<endl;
	}
	return 0;
}