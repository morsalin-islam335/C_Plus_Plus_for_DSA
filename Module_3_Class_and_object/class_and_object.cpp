//program to introduce Class and Object in C++.
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public://Access Mode
        char name[100];
        int roll;
        char section;
};

int main()
{
    Student Jony;
    char name[100]="Jony";
    strcpy(Jony.name,name);
    Jony.roll=12;
    Jony.section='A';
    cout<<Jony.name<<endl<<Jony.roll<<endl<<Jony.section;

    return 0;
}