//program to know about string constructor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a("Hello programmer");//assigning string
    cout<<a;
    string b(a);
    cout<<endl<<b;

    string c("Wellcome to learn programming",7);//
    cout<<endl<<c;//it will print wellcom
    string d(a,6);
    cout<<endl<<d;//it will print programmer
    string e(5,'a');
    cout<<endl<<e;//it will print a*5;

    return 0;
}