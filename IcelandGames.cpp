// Q.:- In Iceland, a tennis game involves 4 referees.
//      Each referee has to point out whether he considers the ball
//      to be inside limits or outside limits. The ball is
//      considered to be IN if and only if all the referees agree
//      that it was inside limits.

// Given the decision of the 4 referees, help Vineet determine whether the ball is considered inside limits or not.
#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==0 && b==0 && c==0 && d==0)
	    cout<<"IN"<<endl;
	    else
	    cout<<"OUT"<<endl;
	}
	return 0;
}
