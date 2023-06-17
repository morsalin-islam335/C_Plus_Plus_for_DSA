// program to access word individually
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream ss;
    string word;
    ss<<a;
    while(ss>>word)
    {
        cout<<word<<endl;
    }
    return 0;
}