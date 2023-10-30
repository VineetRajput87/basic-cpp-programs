// Q.:-Recentl Vineet joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for Y hours ( Y < X ) on Friday. Saturdays and Sundays are holidays.
//     Determine the total number of working hours in one week.
  
#include <iostream>
using namespace std;

int main() 
{
	    int a,b;
	    cout<<"Enter the value of X and Y : ";
	    cin>>a>>b;
	    cout<<(4*a)+b<<endl;
	return 0;
}
