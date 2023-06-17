#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];//initialize 5 size of dynamic array.
    for(int i=0;i<5;i++)
    {
        cin>>a[i];//input array element.
    }
    int *b=new int[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    } 
    delete[] a;//deleting a array.
    b[5]=60,b[6]=70;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}