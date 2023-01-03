// Q.:- Sumit's playlist contains 3 songs named A,B, and C, each of duration exactly X minutes. Sumit generally plays these 3 songs in loop i.e, A→B→C→A→B→C→A→…
//     Sumit went on a train journey of N minutes and played his
//     playlist on loop for the whole journey. How many times did 
//     he listen to the song C completely?

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cout<<"Enter the value of A and B : ";
	    cin>>a>>b;
	    cout<<a/(b*3)<<endl;
	}
	return 0;
}
