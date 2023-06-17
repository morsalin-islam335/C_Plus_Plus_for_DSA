//program for access object with array.
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int mark;
        //note that:if we wanna use array of object we must avoid constructor.

};
int main()
{
    Student arr[3];
    for(int i=0;i<3;i++)//access object individually.
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].mark;
        cin.ignore();


    }
    Student mx,min;
    mx.mark=INT_MIN,min.mark=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(arr[i].mark>mx.mark)
        {
            mx=arr[i];
        }
        if(arr[i].mark<min.mark)
        {
            min=arr[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.mark<<endl;
    cout<<min.name<<" "<<min.roll<<" "<<min.mark;
    return 0;
}