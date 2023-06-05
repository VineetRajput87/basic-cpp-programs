// Q,:- Vineet rented a car for a day. Usually, the cost of the car is Rs 10 per km. However, since Vineet has booked the car for the whole day, he needs to pay for at least 300 kms even if the car runs less than 300 kms. If the car ran X kms, determine the cost Vineet needs to pay.

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
	    cout<<"Enter the distance in KM : ";
	    cin>>a; 
	    if(a<=300)
	    cout<<300*10<<endl;
	    else
	    cout<<a*10<<endl;
	}
	return 0;
}
