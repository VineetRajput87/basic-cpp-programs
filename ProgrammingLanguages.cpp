// Q.:- Vineet is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

// Currently, Vineet has to use a language with two given features A and B. He has two options --- switching to a language with two features A1 and B1 , or to a language with two features A2 and B2. All four features of these two languages are pairwise distinct.

// Tell Vineet whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    if((a==c || a==d) && (b==c || b==d))
	    cout<<1<<endl;
	    else if((a==e || a==f) && (b==e || b==f))
	    cout<<2<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
