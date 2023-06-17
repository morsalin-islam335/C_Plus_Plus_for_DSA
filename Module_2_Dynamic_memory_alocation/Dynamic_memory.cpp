#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int;//cerating heep/dynamic memory
    *a=10;//dereferencing value.
    cout<<*a;//printing with dereferencing.
    float*b=new float;//creating a float dynamic memory.
    *b=40.139;
    cout<<endl<<fixed<<setprecision(2)<<*b;
    return 0;
}