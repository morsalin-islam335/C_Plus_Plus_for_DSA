//program to return array form function
#include<bits/stdc++.h>
using namespace std;
int * arr()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int *fun=arr();
    for(int i=0;i<5;i++)
    {
        cout<<fun[i]<<" ";
    }
    return 0;
}