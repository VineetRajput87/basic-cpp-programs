// Q.:- Vineet is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c, and d respectively. He can use either A or B as the first ingredient and either C or D as the second ingredient.

// The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,t1,t2;
	    cin>>a>>b>>c>>d;
	    if(a>b)
	    a=a;
	    else
	    a=b;
	    
	    if(c>d)
	    c=c;
	    else
	    c=d;
	    
	    cout<<a+c<<endl;
	    
	}
	return 0;
}
