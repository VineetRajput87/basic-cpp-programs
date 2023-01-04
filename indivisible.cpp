#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    int i,a,b,c;
	    cin>>a>>b>>c;
	    for(i=2;i<=100;i++)
	    {
	        if((a%i)!=0){
	          if((b%i)!=0){
	              if((c%i)!=0){
	                cout<<i<<endl;
	                break;
	              }
	          } 
	        } 
	    }
	}
	return 0;
}
