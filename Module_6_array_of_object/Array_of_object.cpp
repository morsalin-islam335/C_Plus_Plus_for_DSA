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
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].mark<<endl;
    }
    return 0;
}