//Q.:- In Rajland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
//     Given that total income is X rupees, find out how much money you get. 
#include <iostream> 
using namespace std;
int main() 
{ 
    int t,a;
    cout<<"How many times you want to repeat : "; 
    cin>>t;
    while(t--)
    { 
        cout<<"Your total income is : ";
        cin>>a;
        if(a<=100)
        cout<<"You get "<<a<<" rupees without tax."<<endl;
        else
        cout<<"You get "<<a-10<<" rupees with tax."<<endl;
    }
    return 0;
}
