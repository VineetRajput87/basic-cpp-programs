// Q.:- Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: DSA,TOC, and DM. Each subject carries 100 marks.

// You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank.
// The rank is decided as follows:
// The person with a bigger total score gets a better rank.
// If the total scores are tied, the person who scored higher in
// DSA gets a better rank.
// If the total score and the DSA score are tied, the person who
// scored higher in TOC gets a better rank.
// If everything is tied, they get the same rank.

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3],b[3],i;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<3;i++)
        {
            cin>>b[i];
        }
        if((a[0]+a[1]+a[2])>(b[0]+b[1]+b[2]))
        cout<<"DRAGON"<<endl;
        else if((a[0]+a[1]+a[2])<(b[0]+b[1]+b[2]))
        cout<<"SLOTH"<<endl;
        else
        {
            if(a[0]>b[0])
            cout<<"DRAGON"<<endl;
            else if(a[0]<b[0])
            cout<<"SLOTH"<<endl;
            else
            {
                if(a[1]>b[1])
                cout<<"DRAGON"<<endl;
                else if(a[1]<b[1])
                cout<<"SLOTH"<<endl;
                else
                cout<<"TIE"<<endl;
                
            }
        }
    }
	return 0;
}
