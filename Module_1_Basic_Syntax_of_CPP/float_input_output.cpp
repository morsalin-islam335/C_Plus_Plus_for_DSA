//program to print fixed digit after point(.) in C++
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(2)<<a;
    return 0;
}