// Q.:- Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.
//     Our Om took the above advice very seriously and decided to
//     set a target for himself.
//     Om decides to solve at least 10 problems every week for 4
//     weeks.
//     Given the number of problems he actually solved in each week
//     over 4 weeks as P1, P2, P3 and P4,
//     output the number of weeks in which Om met his target.

#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d;
    cout<<"Enter the value of P1,P2,P3 and P4 : ";
    cin>>a>>b>>c>>d;
    if(a<10 && b<10 && c<10 && d<10)
    cout<<"0"<<endl;
    else if((a<10 && b<10 && c<10) || (a<10 && b<10 && d<10) || (a<10 && c<10 && d<10) || (d<10 && b<10 && c<10))
    cout<<"1"<<endl;
    else if((a<10 && b<10) || (a<10 && c<10) || (a<10 && d<10) || (c<10 && b<10) || (d<10 && b<10) || (d<10 && c<10))
    cout<<"2"<<endl;
    else if(a<10 || b<10 || c<10 || d<10)
    cout<<"3"<<endl;
    else
    cout<<"4"<<endl;
    return 0;
}
