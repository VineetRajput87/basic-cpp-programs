// Q.:- Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him (as army-chief), and the reason for that was their really powerful army, also called as Mahasena.
// Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.
// Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY".
#include <iostream>
using namespace std;
#define max 100
int main() 
{ 
	int t[max],i,even=0,odd=0,a;
	cout<<"Numbers of Soldier : ";
	cin>>a;
	
	for(i=0; i<a ; i++)
	{
	    cout<<"Enter the number of weapons of "<<i+1<<" Soldier : ";
	    cin>>t[i];
	    if(t[i]%2==0)
	    even++;
	    else
	    odd++;
	}
	if(even>odd)
	cout<<"THEY ARE READY FOR BATTLE"<<endl;
	else
	cout<<"THEY ARE NOT READY"<<endl;
	
	return 0;
}
