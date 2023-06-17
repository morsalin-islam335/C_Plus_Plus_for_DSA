//program for  dynamic object.
#include<bits/stdc++.h>
using  namespace std;
class Student
{
    public://access mode
        char name[100];
        int roll;
        char section;
        
};

int main()
{
    //Student Jony(name,13,'a');//Normal object 
    Student *Jony=new Student;
    char name[100]="Jony";
    strcpy(Jony->name,name);
    Jony->roll=13;
    Jony->section='A';
    cout<<Jony->name<<endl;
    cout<<Jony->roll<<endl;
    cout<<Jony->section<<endl;
    

    return 0;
}