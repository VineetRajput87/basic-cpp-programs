// Q.:- Each item in Vineet’s menu is assigned a spice level from 1 to 10. Based on the spice level, the item is categorised as:

//     MILD: If the spice level is less than 4.
//     MEDIUM: If the spice level is greater than equal to 4 but
//     less than 7. 
//     HOT: If the spice level is greater than equal to 7.
//     Given that the spice level of an item is X, find the
//     category it lies in.

#include <iostream>
using namespace std;
int main() 
{
	    int a;
	    cout<<"Enter the value of A : ";
	    cin>>a;
	    if(a<4)
	    cout<<"MILD"<<endl;
	    else if(a>=4 && a<7)
	    cout<<"MEDIUM"<<endl;
	    else
	    cout<<"HOT"<<endl;
	return 0;
}
