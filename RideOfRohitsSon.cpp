// Q.:- Rohit's son wants to go on a roller coaster ride. The height of Rohit's son is X inches while the minimum height required to go on the ride is H inches. Determine whether he can go on the ride or not.

#include <iostream>
using namespace std;
int main() 
{
	int t, X, H;
	cout<<"Enter how many times you want to repeat : ";
	cin>>t;
    while(t--)
    {
        cout<<"Enter the hight of Rohit's son : ";
        cin>>X;
        cout<<"Enter the hight requried to go on ride : ";
        cin>>H;
        if(X>=H)
        cout<<"YES he can ride."<<endl;
        else
        cout<<"NO he can't ride."<<endl;
    }
    return 0;
}
