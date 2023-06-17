//program for  count repetation of word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        int  cnt[26]={0};
        int sum=0;
        for(int j=0;j<len;j++)
        {
            cnt[s[j]-'A']++;
        }
        for(int j=0;j<26;j++)
        {
            if(cnt[j]>0)
            {
                sum+=cnt[j]+1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}