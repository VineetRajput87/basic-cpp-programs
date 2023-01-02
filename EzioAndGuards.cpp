// Q.:-   Ezio can manipulate at most X number of guards with the apple of eden. Given that there are Y number of guards, predict if he can safely manipulate all of them.

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
        if(a>=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
