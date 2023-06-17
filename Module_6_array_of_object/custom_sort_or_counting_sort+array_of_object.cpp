//program for sort sting customly
#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
    public:
        char ch;
        int cnt;
};
bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt>b.cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    CustomSort arr[26];
    for(int i=0;i<26;i++)  
    {
        arr[i].ch=i+'a';
        arr[i].cnt=0;
    }



    
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        char c;
        cin>>c;
        arr[c-'a'].cnt++;
    }
    sort(arr,arr+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(arr[i].cnt>0)
        {
            for(int j=0;j<arr[i].cnt;j++)
            {
                cout<<arr[i].ch;
            }
        }
    }
    return 0;
}