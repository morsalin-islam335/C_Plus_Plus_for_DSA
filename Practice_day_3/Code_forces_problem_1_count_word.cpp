//program for count word from string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int cnt=0,flag=1;
    for(char c:a)
    {
        if(isalpha(c))
        {
            if(flag==1)
            {
                cnt++;
                flag=0;
            }
        }
        else
        {
            flag=1;
        }
    }
    cout<<cnt;
    return 0;
}