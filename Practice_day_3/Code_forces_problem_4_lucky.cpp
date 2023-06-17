//program for check sum of string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int a=0;a<test;a++)
    {
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++)
        {
            sum1+=s[i]-48;
        }
        for(int i=3;i<6;i++)
        {
            sum2+=s[i]-48;
        }
        (sum1==sum2)?cout<<"YES":cout<<"NO";
        cout<<endl;

    }
    return 0;
}