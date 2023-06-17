//porgram to compare marks by using object.
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        //name,roll,section,math_marks,cls
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
        Student(char *n,int r,char s,int mm,int c)
        {
            strcpy(name,n);
            roll=r;
            section=s;
            math_marks=mm;
            cls=c;

        }
};

int main()
{
    char rony[100]="Rony";
    char jony[100]="Jony";
    char kamal[100]="Kamal";
    Student Rony(rony,13,'A',85,9);
    Student Jony(jony,1,'A',95,9);
    Student Kamal(kamal,12,'A',90,9);

    if(Rony.math_marks>Jony.math_marks&&Rony.math_marks>Kamal.math_marks)
    {
        cout<<Rony.name;
    }
    else if(Jony.math_marks>Rony.math_marks&&Jony.math_marks>Kamal.math_marks)
    {
        cout<<Jony.name;
    }
    else
    {
        cout<<Kamal.name;
    }

    return 0;
}