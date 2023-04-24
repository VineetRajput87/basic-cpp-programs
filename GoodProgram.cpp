// Q.:- In computing, the collection of four bits is called a nibble.
// Vineet defines a program as:
// 1. Good, if it takes exactly X nibbles of memory, where X is a positive integer.
// 2. Not Good, otherwise.
// Given a program which takes  bits of memory, determine whether it is Good or Not Good.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%4==0)
	    cout<<"Good"<<endl;
	    else
	    cout<<"Not Good"<<endl;
	}
	return 0;
}
