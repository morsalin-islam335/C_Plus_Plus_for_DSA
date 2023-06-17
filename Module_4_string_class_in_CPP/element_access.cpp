//program for access element access.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<endl;//access 0 th index.
    cout<<s.at(1);//access 1th index.
    cout<<endl<<s.back();//access last index.
    string str;
    cin>>str;
    cout<<str.front();//access first index.
    cout<<endl<<str.size();//return size of str string.


    
    return 0;
}