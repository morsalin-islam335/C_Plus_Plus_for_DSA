//program for return object.
#include<bits/stdc++.h>
using  namespace std;
class Student
{
    public://access mode
        char name[100];
        int roll;
        char section;
        Student(char *n,int r,char s)//constructor
        {
            strcpy(name,n);
            roll=r;
            section=s;

        }
};

Student fun()
{
    char nm[100]="Jony";
    Student Jony(nm,12,'A');
    return Jony;
}

int main()
{
    Student Kamal=fun();
    cout<<Kamal.roll<<" "<<Kamal.name;   

    return 0;
}