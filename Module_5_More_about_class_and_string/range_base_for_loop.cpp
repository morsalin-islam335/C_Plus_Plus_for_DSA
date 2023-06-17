//program to learn range base for loop
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
    for(int something:arr)
    {
        cout<<something<<" ";
    }
    return 0;
}