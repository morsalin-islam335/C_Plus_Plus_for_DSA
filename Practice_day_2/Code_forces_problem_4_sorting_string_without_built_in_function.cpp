//program for sort string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count[26]={0};
    char d;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        count[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
            continue;
        }
        else
        {
            for(int j=0;j<count[i];j++)
            {
                d=i+'a';
                cout<<d;
            }
        }
    }
    return 0;
    
}