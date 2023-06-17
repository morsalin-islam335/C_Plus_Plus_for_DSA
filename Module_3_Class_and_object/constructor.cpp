//program to introduce constructor
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        Student(char *n,int r)//constructor 
        {
            strcpy(name,n);
            roll=r;

        }
};

int main()
{
    char name[20]="Rony";
    Student Rony(name,12);
    cout<<Rony.name<<' '<<Rony.roll;
    return 0;
}