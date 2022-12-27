// Q.:- Mohit's coding class is very famous in Mohitland.This year X students joined his class and each student will require one chair to sit on. Mohit already has Y chairs in his class. Determine the minimum number of new chairs Mohit must buy so that every student is able to get one chair to sit on.

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
        cout<<"Enter the count of Joined students(X) : ";
        cin>>a;
        cout<<"Enter the coount chair mohit already have : ";
        cin>>b;
        if(a>b)
        cout<<"Mohit must buy "<<a-b<<" chairs more."<<endl;
        else
        cout<<"mohit has enough chair already."<<endl;
    }
	return 0;
}
