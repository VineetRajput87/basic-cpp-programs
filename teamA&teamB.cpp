// Q.:- There is a cricket match going on between two teams A
//   and B.Team B is batting second and got a target of X 
//   runs.Currently, team B has scored Y runs. Determine how 
//   many more runs Team B should score to win the match.
// Note: The target score in cricket matches is one more than 
//     the number of runs scored by the team that batted 
//     first.
    
#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    cout<<"Enter how many times you wnat to repeat : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the score of A and B at this time : ";
        cin>>a>>b;
        cout<<"The team B have to score "<<a-b<<" runs more to win the match."<<endl;
    }
	return 0;
}
