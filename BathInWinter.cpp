// Q.:- A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water. 
// One person requires exactly 2 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser.
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
        cout<<a/(b*2)<<endl;
    }
	return 0;
}
