// Q.:- Ravi has recently moved into an apartment. It takes 30 minutes for Ravi to reach office from the apartment.
//      Ravi left for the office X minutes before Ravi was
//      supposed to reach. Determine whether or not Ravi will 
//      be able to reach on time. 
 
#include <iostream>
using namespace std;
int main() 
{
    int t,a;
    cout<<"How many times you want to repeat : ";
    cin>>t;
    while(t--)
    {
        cout<<"Ravi leaves at how much minutes before : ";
        cin>>a;
        if(a>=30)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
