// Q.:- King loves to go on tours with his friends.King has N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.
    
#include <iostream>
using namespace std; 
int main() 
{ 
    int t,N,M;
    cout<<"Enter how many times you wnat to repeat : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the number of cars with seats 5 and 7 respectivly : ";
        cin>>N>>M;
        cout<<(N*5)+(M*7)<<endl;
    }
	return 0;
}
