/*
Q :- Vlad enjoys listening to music. He lives in Sam's Town. A few days ago he had a birthday, so his parents gave him a gift: MP3-player! Vlad was the happiest man in the world! Now he can listen his favorite songs whenever he wants!
Vlad built up his own playlist. The playlist consists of N songs, each has a unique positive integer length. Vlad likes all the songs from his playlist, but there is a song, which he likes more than the others. It's named "Uncle Johny".
After creation of the playlist, Vlad decided to sort the songs in increasing order of their lengths. For example, if the lengths of the songs in playlist was {1, 3, 5, 2, 4} after sorting it becomes {1, 2, 3, 4, 5}. Before the sorting,
"Uncle Johny" was on K-th position (1-indexing is assumed for the playlist) in the playlist. Vlad needs your help! He gives you all the information of his playlist. Your task is to find the position of "Uncle Johny" in the sorted playlist.
*/

#include <bits/stdc++.h>
using namespace std;

void sort(int num[], int len);
void swapNums(int nums[], int first, int second);


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,temp;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        temp = arr[k-1];
        sort(arr, n);
        
        for (int i = 0; i < n; i++)
        {
            if(temp==arr[i])
            cout<<i+1<<endl;    
        }
        
        
    }
}

void sort(int num[], int len)
{
    bool isSwapped;
 
    for (int i = 0; i < len; i++) 
    {
        isSwapped = false;
        for (int j = 1; j < len - i; j++) 
        {
            if (num[j] < num[j - 1]) 
            {
                swapNums(num, j, (j - 1));
                isSwapped = true;
            }
        }
        if (!isSwapped) 
        {
            break;
        }
    }
}
 
void swapNums(int nums[], int first, int second)
{
    int curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}
