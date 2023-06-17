//program for print charecter N times.
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
        char c;
        cin>>c;
        cout<<c;
        for(int j=0;j<n-1;j++)
        {
            cout<<" "<<c;
        }
        cout<<endl;
    }
    return 0;
}