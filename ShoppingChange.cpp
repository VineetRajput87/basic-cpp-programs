// Q.:- Vineet went shopping and bought items worth X rupees
//      1 ≤ X ≤ 100). Unfortunately, Vineet only has a single 100 rupees note.
// Since Vineet is weak at maths, can you help Vineet in calculating what money he should get back after paying 100 rupees for those items?

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
	    cout<<100-a<<endl;
	}
	return 0;
}
