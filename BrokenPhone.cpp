// Q.:- Vineet broke his phone. He can get it repaired by spending X rupees or he can buy a new phone by spending Y rupees. Vineet wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.
#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--) 
	{
	    int a,b;
	    cin>>a>>b;
	    if(a<b)
	    cout<<"REPAIR"<<endl;
	    else if(b<a)
	    cout<<"NEW PHONE"<<endl; 
	    else
	    cout<<"ANY"<<endl;
	}
	return 0;
} 
