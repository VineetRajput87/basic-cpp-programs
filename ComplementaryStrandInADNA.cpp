// Q.:- You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.
// Vineet knows that:
// A is complementary to T.
// T is complementary to A.
// C is complementary to G.
// G is complementary to C.

// Using the string S, determine the sequence of the complementary strand of the DNA.



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]=='A')
	        {
	            a[i]='T';
	            cout<<a[i];
	        }
	        else if(a[i]=='T')
	        {
	            a[i]='A';
	            cout<<a[i];
	        }
	        else if(a[i]=='C')
	        {
	            a[i]='G';
	            cout<<a[i];
	        }
	        else if(a[i]=='G')
	        {
	            a[i]='C';
	            cout<<a[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
