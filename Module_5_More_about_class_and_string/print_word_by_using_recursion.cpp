//program to print word by using recursive function.
#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        
        cout<<word<<" ";
        fun(ss);
        
    }
}
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    fun(ss);
    return 0;
}