//program for find minimum operaton for make same even and same odd number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int even=0,odd=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }

        }
        (even<odd)?cout<<(n/2)-even<<endl:cout<<(n/2)-odd<<endl;
    }
    return 0;
}