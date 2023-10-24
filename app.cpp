#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,flag=0;
	    cin>>a>>b;
	    if(a==1){
	        cout<<1<<endl;
	        continue;
	    }
	    while(a!=b){
	        if(a>b)
	        a-=b;
	        else 
	        b-=a;
	    }
	    cout<<a<<endl;
	}
	return 0;
}
