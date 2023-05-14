// Q.:- Amit got his dream seat in F1 and secured a 3rd
// place in his debut race. He now wants to know the time gap 
// between him and the winner of the race.
// You are his Amit engineer and you only know the time gap 
// between Amit and the runner up of the race, given as A  
// seconds,and the time gap between the runner up and the winner of the race, given as B seconds.
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cout<<"How many times do you want to continue : ";
    cin>>t;
    while(t--)
    {
        int a,b;
        cout<<"Enter the A and B : ";
        cin>>a>>b;
        cout<<a+b<<endl;
    }
	return 0;
}
