// Q.:- Vineet has a rectangular plate of length N cm and width M cm. He wants to make a wireframe around the plate. The wireframe costs X rupees per cm.
//     Determine the cost Vineet needs to incur to buy the wireframe.
 
#include <iostream> 
using namespace std;
int main() 
{
	int t;
	cout<<"How many times do you want to continue : ";
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cout<<"Enter the value of A,B and C : ";
	    cin>>a>>b>>c;
	    cout<<((a*2)+(b*2))*c<<endl;
	}
	return 0;
}
