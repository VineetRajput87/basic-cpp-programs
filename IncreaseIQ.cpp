// Q.:- A study has shown that playing a musical instrument helps in increasing one's IQ by 7 points. Vineet knows he can't beat Einstein in physics, but he wants to try to beat him in an IQ competition.
//     You know that Einstein had an IQ of 170, and Vineet
//     currently has an IQ of X. 
//     Determine if, after learning to play a musical instrument,
//     Vineet's IQ will become strictly greater than Einstein's.
//     Print "Yes" if it is possible for Chef to beat Einstein,
//     else print "No" (without quotes).

#include <iostream>
using namespace std;
int main() 
{
	    int a,b;
	    cout<<"Enter the value of X : ";
	    cin>>a;
	    if((a+7)>170)
     	cout<<"YES"<<endl;
    	else 
	    cout<<"NO"<<endl;
	return 0;
}
