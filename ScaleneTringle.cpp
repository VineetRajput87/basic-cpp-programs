// Q.:- Given A, B and C as the sides of a triangle, find whether the triangle is scalene.
// Note: A triangle is said to be scalene if all three sides of the triangle are distinct.
// It is guaranteed that the sides represent a valid triangle.
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
	    if(a==b || b==c || c==a)
	    cout<<"NO"<<endl;
	    else 
	    cout<<"YES"<<endl;
	}
	return 0;
}

