// Q.:- There is a fair going on in sonuland. Sonu wants to visit the fair along with his N friends. Sonu manages to collect K passes for the fair. Will Sonu be able to enter the fair with all his N friends?
//     A person can enter the fair using one pass, and each pass
//     can be used by only one person.
  
#include <iostream>
using namespace std; 
int main() 
{
    int t;
    cout<<"How many times do you want to continue :";
    cin>>t;
    while(t--)
    {
        int a,b;
        cout<<"Enter A and B : ";
        cin>>a>>b;
        if(b>a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
