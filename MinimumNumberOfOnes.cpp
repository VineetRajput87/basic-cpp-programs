// Q.:- Your teacher gave you an assignment — given an integer N, construct a binary string B=b1 b2 b3 …bN of length N such that: max(bi,bi+1)=1
// for every i from 1 to N−1.

// What is the minimum number of 1's such a binary string can contain?

// Note: A binary string is a string consisting of only the digits 0 and 1.

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
	    cout<<a/2<<endl;
	}
	return 0;
}
