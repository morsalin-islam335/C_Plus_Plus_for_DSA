//program to know main and max built-in function
#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b);//It will print minimum value;
    cout<<endl<<max(a,b);//It will print maximum   value;
    swap(a,b);
    cout<<endl<<a<<" "<<b;
    return 0;
}