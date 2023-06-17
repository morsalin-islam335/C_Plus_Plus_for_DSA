//program for return array from function
#include<bits/stdc++.h>
using namespace std;
int *get_arr(int n)
{
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int*p=get_arr(n);
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }

    return 0;
}