//porgram for find out sum of equation.
#include<bits/stdc++.h>
using namespace std;
long long power(int a,int b)
{
    long long pow1=1,pow2=0;
    for(int i=2;i<=b;i+=2)
    {
        for(int j=1;j<=i;j++)
        {
            pow1*=a;
        }
        pow2+=pow1;
        pow1=1;
    }
    return pow2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // cout<<long long(power(a,b));
    long long x=power(a,b);
    cout<<x;
    return 0;
}