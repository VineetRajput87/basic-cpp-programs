// Q.:- There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, 
//     determine if it will still be possible for all the N friends
//     to do so or not.

#include <iostream>
using namespace std;
int main() 
{
	    int a,b,c;
	    cout<<"Enter the value of N,M and K : ";
	    cin>>a>>b>>c;
	    if((b-c)>=a)
	    cout<<"YES, They can !"<<endl;
	    else
	    cout<<"NO, They don't !"<<endl;
	return 0;
}
