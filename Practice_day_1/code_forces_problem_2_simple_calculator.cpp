//program to create a simple calculator
#include<bits/stdc++.h>
using namespace std;
void add(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
void mul(int a, int b)
{
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
}
void sub(int a,int b)
{
    cout<<a<<" - "<<b<<" = "<<a-b;
}
int main()
{
    int x,y;
    cin>>x>>y;
    add(x,y),mul(x,y),sub(x,y);
    return 0;
}