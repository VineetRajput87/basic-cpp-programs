// Q.:- Vineet defines a group of three friends as a perfect group if the age of one person is equal to the sum of the age of remaining two people.Given that, the ages of three people in a group are A,B, and C respectively, find whether the group is perfect

#include <iostream>
using namespace std;
int main() 
{
    int t;
    cout<<"how many times do you want to continue : ";
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cout<<"Enter the age of A,B and C : ";
        cin>>a>>b>>c;
        if((a+b)==c || (a+c)==b || (b+c)==a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
