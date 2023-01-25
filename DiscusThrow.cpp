// Q.:- In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.

// You are given the distances for all 3 throws of a player. Determine the final score of the player.

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        {
            if(a>c)
            cout<<a<<endl;
            else
            cout<<c<<endl;
        }
        else if(b<c)
        {
            if(c>a)
            cout<<c<<endl;
            else
            cout<<a<<endl;
        }
        else
        cout<<b<<endl;
    }
    return 0;
}
