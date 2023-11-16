// Q.:- Vineet has scored A,B, and C marks in 3 different subjects respectively.
//     Vineet will fail if the average score of any two subjects is
//     less than 35.
//     Determine whether Vineet will pass or fail.
 
#include <iostream>
using namespace std; 

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)/2<35 || (a+c)/2<35 || (b+c)/2<35)
	    cout<<"Fail"<<endl;
	    else
	    cout<<"Pass"<<endl;
	}
	return 0;
}
