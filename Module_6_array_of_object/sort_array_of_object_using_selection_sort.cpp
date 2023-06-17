//program for sort array of object by using selection sort.
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int mark;
        //If we wanna use array of object, we must avoid constructor.
};
int main()
{
    Student arr[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].mark;
        getchar();
    }
    //now we will sort this array of object with asscending order for mark;
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i].mark>arr[j].mark)
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].mark<<endl;
    }
    return 0;
}