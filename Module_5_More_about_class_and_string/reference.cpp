//program for referencing string.    
#include<bits/stdc++.h>
using namespace std;
void fun(string &s)
{
    s="wellcome";
}
int main()
{
    string s="hello world";
    cout<<s<<endl;//it will print hello world.
    fun(s);
    cout<<s;//now s=wellcome.

    return 0;
}