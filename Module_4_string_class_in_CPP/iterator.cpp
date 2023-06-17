//program for learn iterator in CPP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<*s.begin();
    cout<<endl<<*s.end();
    cout<<endl<<*(s.end()-1);

    //string::iterator it;
    for(string:: iterator it=s.begin();it>s.end();it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}