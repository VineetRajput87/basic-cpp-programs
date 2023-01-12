// Q.:- The ZCO Scholarship Contest has just finished, and you finish with a rank of RR. You know that Rank 1 to Rank 50 will get 100% scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get 50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
//     What percentage of scholarship will you get ?

#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	if(a>0 && a<=50)
	cout<<100<<endl;
	else if(a>50 && a<=100)
	cout<<50<<endl;
	else
	cout<<0<<endl;
	return 0;
}
