//program to access string with class.
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
};

int main()
{
    Person Jony("Jony Sarkar",12);
    cout<<Jony.name<<" "<<Jony.roll;    
    return 0;
}