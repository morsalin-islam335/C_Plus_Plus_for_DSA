//program for extract string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    string::iterator it;
    for(it=a.begin();it<a.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}