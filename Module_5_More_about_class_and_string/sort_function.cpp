//program to use sort function to sort string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // getline(cin,s);
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;

    return 0;
}