// Q.:- Vineet has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters. Vineet turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour. She left the tap running for exactly Z hours. 
//    Determine whether the bucket has been overflown,filled exactly,
//    or is still left unfilled.
#include <iostream>
using namespace std;
int main() 
{
	    int a,b,c,d; 
	    cin>>a>>b>>c>>d;
	    if(b<((c*d)+a))
	    cout<<"overFlow"<<endl;
	    else if(b==((c*d)+a))
	    cout<<"filled"<<endl;
	    else
	    cout<<"Unfilled"<<endl;
	return 0;
}
