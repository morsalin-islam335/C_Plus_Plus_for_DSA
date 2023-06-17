//program for sort array of object by using sort function
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
bool sort2(Student a,Student b)
{
    if(a.mark<b.mark)
    {
        return true;
    }
    else return false;

}
int main()
{
    Student arr[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].mark;
        getchar();
    }
    //now we will sort this array of object with asscending order for mark by using sort function;

    sort(arr,arr+3,sort2);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].mark<<endl;
    }
    return 0;
}