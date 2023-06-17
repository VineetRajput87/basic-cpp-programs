// Q.:- There is a contest containing 2 problems A and B.
// 2 strong participants P and Q participated in the contest and solved both the problems.

// P made AC submissions on problems A and B at time instants P_A and P_B
//   respectively while Q made AC submissions on problems A and B at time instants Q_A and Q_B.
// It is given that the time penalty is the minimum time instant at which a participant has solved both the problems. Also the participant with the lower time penalty will have a better rank.
// Determine which participant got the better rank or if there is a TIE.

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
	    if(a>=b)
	    t1=a;
	    else
	    t1=b;
	    
	    if(c>=d)
	    t2=c;
	    else
	    t2=d;
	    
	    if(t1<t2)
	    cout<<"P"<<endl;
	    else if(t1>t2)
	    cout<<"Q"<<endl;
	    else
	    cout<<"TIE"<<endl;
	}
	return 0;
}
