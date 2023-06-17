//program to check palindrome array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1,j=n-1;
    for(int i=0;i<j;i++)
    {
        if(arr[i]!=arr[j])
        {
            count=0;
            break;   
        }
        j--;
    }
    (count!=0)?cout<<"YES":cout<<"NO";

    return 0;
}