// Q.:- rehan took an examination two times. In the first attempt, he scored X marks while in the second attempt he scored Y marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score.
//  Determine the final score of the rehan.

#include <iostream>
using namespace std;
int main() 
{
	int N, x, y;
	cout<<"Enter how many times you want to repeat : ";
	cin >> N;
	for (int i = 1; i <= N; i++) 
	{
	    cout<<"Enter the scored marks in both examination : ";
		cin >> x >> y;
		if (x > y) 
		{
			cout <<"the final score of the rehan is "<<x<< endl;
		}
		else
		{
			cout <<"the final score of the rehan is "<<y<< endl;
		}
	}
}
