// Q.:- Vineet has planned that he will drink exactly X liters of tea daily. He has an empty jar having a capacity of Y liters.
// Vineet can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Vineet is charged Z rupees.
// Vineet wonders what is the minimum amount of money he has to pay for drinking exactly X liters of tea daily.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a%b==0)
	    cout<<((a/b))*c<<endl;
	    else
	    cout<<((a/b)+1)*c<<endl;
	     
	}
	return 0;
}
