//program to print reverse word by using recursive function
#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        fun(ss);
        cout<<word<<" ";
    }
}
int main()
{
    string a;
    getline(cin,a);
    stringstream strstm(a);
    fun(strstm);
    return 0;
}