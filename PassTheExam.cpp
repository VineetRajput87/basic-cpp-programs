// Q.:- Vineet appeared for an exam consisting of 3 sections. Each section is worth 100 marks.

// Vineet scored A marks in Section 1, B marks in section 2, and C
// marks in section 3.

// Vineet passes the exam if both of the following conditions 
// satisfy:

// 1. Total score of Chef is ≥ 100;
// 2. Score of each section ≥ 10.

// Determine whether Vineet passes the exam or not.

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
	    if((a+b+c)>=100 && a>=10 && b>=10 && c>=10)
	    cout<<"PASS"<<endl;
	    else
	    cout<<"FAIL"<<endl;
	    
	}
	return 0;
}
