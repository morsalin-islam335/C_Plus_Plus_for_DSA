//program for copy dynamic ocject.
#include<bits/stdc++.h>
using namespace std;
class  Person
{
    public:
        string name;
        int roll;
        Person(string name,int roll)
        {
            this->name=name;
            this->roll=roll;
        }
        
};

int main()
{
    Person* Rony=new Person("Rony",12);
    Person* Jony=new Person("Jony",20);
    *Jony=*Rony;
    cout<<Jony->name<<" "<<Jony->roll;

    return 0;
}