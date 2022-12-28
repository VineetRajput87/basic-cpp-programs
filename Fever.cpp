// Q.:- Mohit is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F. A person is said to have fever if his body temperature is strictly greater than 98 °F.
//   Determine if Mohit has fever or not.

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
        cout<<"Enter temperature : ";
        cin>>a;
        if(a>98)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
