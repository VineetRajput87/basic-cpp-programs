// Q.:- “You won’t get caught if you hide behind someone.”

// Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

// Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. Many players saw this trick and also started hiding behind Ali.

// Now, there are N players standing between Gi-Hun and Ali in a straight line, with the i_th
//   player having height H_i. Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,count=0;
	    cin>>a>>b;
	    int c[a];
	    for(int i=0 ; i<a ; i++ )
	    {
	        cin>>c[i];
	        if(c[i]>b)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
