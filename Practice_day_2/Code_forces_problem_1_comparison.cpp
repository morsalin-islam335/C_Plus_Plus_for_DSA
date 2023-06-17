//program for comparison number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1;
    cin>>num1;
    char sign;
    cin>>sign;
    int num2;
    cin>>num2;
    if(sign=='>')
    {
        (num1>num2)?cout<<"Right":cout<<"Wrong";
    }

    if(sign=='<')
    {
        (num1<num2)?cout<<"Right":cout<<"Wrong";
    }

    if(sign=='=')
    {
        (num1==num2)?cout<<"Right":cout<<"Wrong";
    }
    return 0;
}