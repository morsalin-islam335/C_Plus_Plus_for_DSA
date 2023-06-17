//program for  increasing and delete array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int*arr2=new int [m];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    delete[] arr1;
    for(int i=n;i<m;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    delete[] arr2;
    return 0;
}