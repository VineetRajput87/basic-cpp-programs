// Q.:-There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town.
//     Determine the final population of town in millions.
 
#include <iostream>
using namespace std;
int main() 
{
	int t;
	cout<<"Enter how many time do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cout<<"Enter the population of town : ";
	    cin>>a;
	    cout<<"Enter the population that left from the town : ";
	    cin>>b;
	    cout<<"Enter the population that immigrated to the town : ";
	    cin>>c;
	    cout<<"Current Population Of Town is : "<<(a-b)+c<<endl;
	}
	return 0;
}
