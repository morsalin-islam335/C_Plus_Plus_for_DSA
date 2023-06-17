//program for  dynamic object.
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

int main()
{
    char  name[100]="Solimuddi";
    Student *Solimullah=new Student(name,12,'A');
    cout<<(*Solimullah).name;
    cout<<endl<<Solimullah->roll;

}