//program to find out smallest pair
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int min;
    for(int a=0;a<test;a++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        min=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((arr[i]+arr[j]+j-i)<min)
                {
                    min=arr[i]+arr[j]+j-i;
                }
            }
        }
        cout<<min<<endl;
        
    }
    return 0;
}