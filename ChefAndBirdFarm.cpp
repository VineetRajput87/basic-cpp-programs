// Q.:- In Iceland, each chicken has X legs and each duck has Y legs. Vineet's farm can have exactly one type of bird.

// Given that the birds on the farm have a total of Z legs: 
// Print CHICKEN, if the farm can have only chickens but not ducks.
// Print DUCK, if the farm can have only ducks but not chickens. 
// Print ANY, if the farm can have either chickens or ducks.
// Print NONE, if the farm can have neither chickens nor ducks.

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
        if(c%a==0 && c%b==0)
        cout<<"ANY"<<endl;
        else if(c%a==0 && c%b!=0)
        cout<<"CHICKEN"<<endl;
        else if(c%b==0 && c%a!=0)
        cout<<"DUCK"<<endl;
        else 
        cout<<"NONE"<<endl;
    }
	return 0;
}
