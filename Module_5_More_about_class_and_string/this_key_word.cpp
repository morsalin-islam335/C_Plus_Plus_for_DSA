//program to about this key word
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
    Person Jony("Jony Sarkar",12);
    cout<<Jony.name<<" "<<Jony.roll<<endl;
      
    return 0;
}