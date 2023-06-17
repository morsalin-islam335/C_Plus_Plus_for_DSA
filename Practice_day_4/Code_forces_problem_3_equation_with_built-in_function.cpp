//program for find out sum from exponanent
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s;
    long long a,b;
    cin>>a>>b;
    for(int i=2;i<=b;i+=2)
    {
        s+=pow(a,i);
    }
    cout<<(long long)s;
    return 0;
}