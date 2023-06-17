//program for function inside class
#include<bits/stdc++.h>
using namespace std;
class  Person
{
    public:
        string name;
        int roll;
        Person(string nm,int r)
        {
            name=nm;
            roll=r;
        }
        void fun()
        {
            cout<<"Hello programmer"<<endl;
            cout<<name<<" "<<roll;
        }
};

int main()
{
    Person Jony("Jony Sarkar",12);
    cout<<Jony.name<<" "<<Jony.roll<<endl;
    Jony.fun();    
    return 0;
}