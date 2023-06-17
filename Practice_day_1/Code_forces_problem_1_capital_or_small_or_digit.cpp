//program to identify alphabate and digit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>=65&&x<=90||x>=97&&x<=122)
    {
        cout<<"ALPHA"<<endl;
        (x>=65&&x<=90)?cout<<"IS CAPITAL":cout<<"IS SMALL";
    }
    else if(x>=48&&x<=57)
    {
        cout<<"IS DIGIT";
    }
    return 0;
}