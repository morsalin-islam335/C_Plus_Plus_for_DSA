//program to know about string modifiers.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    cout<<a+b;//concatination string.
    b.empty();
    b.append(a);
    cout<<endl<<a;
    string c;
    c+=a;//concatination string.
    cout<<endl<<c;
    c.assign("wellcome");
    cout<<endl<<c;
    c.push_back('a');
    cout<<endl<<c;
    string d="Wellcome to learn programming";
    d.erase(5,3);//erase string index.
    cout<<endl<<d;
    string e="C programming";
    e.replace(0,1,"Python");//replacing string.
    cout<<endl<<e;


    return 0;
}