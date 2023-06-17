//program to know about string capacity.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s.size();
    cout<<endl<<s.max_size();
    cout<<endl<<s.capacity();
    s.clear();
    if(s.empty())
    {
        cout<<endl<<"True";
    }
    else
    {
        cout<<endl<<"False";
    }
    s="Gello";

    cout<<endl<<s.at(1);
    s.resize(10);
    cout<<endl<<s.size();


    return 0;
}