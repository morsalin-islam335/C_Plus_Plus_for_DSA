//program for sort strin by using countion sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int frequency[26]={0};
    for(int i =0;i<a;i++)
    {
        char ch;
        cin>>ch;
        frequency[ch-'a']++;

    }
    for(char i='a';i<='z';i++)
    {
        if(frequency[i-'a']>0)
        {
            for(int j=0;j<frequency[i-'a'];j++)
            {
                cout<<i;
            }
        }
    }
    return 0;
}