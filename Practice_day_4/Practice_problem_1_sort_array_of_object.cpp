//program for sort array of object.
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++)
    {
        // getline(cin,arr[i].name);
        cin>>arr[i].name;
        cin>>arr[i].roll>>arr[i].marks;
        // getchar();
    }

    
    return 0;
}