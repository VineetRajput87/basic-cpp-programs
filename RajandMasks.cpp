// Q.:- Raj is shopping for masks. In the shop, he encounters 2 types of masks:
//     Disposable Masks — cost X but last only 1 day.
//     Cloth Masks — cost Y but last 10 days.
//     Raj wants to buy masks to last him 100 days. He will buy the
//     masks which cost him the least. In case there is a tie in
//     terms of cost, Raj will be eco-friendly and choose the cloth
//     masks. Which type of mask will Chef choose?

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    a=a*100;
	    b=b*10;
	    if(a<b)
	    cout<<"Disposable"<<endl;
	    else
	    cout<<"Cloth"<<endl;
	}
	return 0;
}
