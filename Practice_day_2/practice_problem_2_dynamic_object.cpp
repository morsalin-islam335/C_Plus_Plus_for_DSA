//program to access dynamic object.
#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
        int jousey_no;
        char country[30];
};
int main()
{
    Cricketer *Dhony=new Cricketer;
    char country[30]="India";
    strcpy(Dhony->country,country);
    Dhony->jousey_no=10;
    Cricketer *Kohli=new Cricketer;

    // strcpy(Kohli->country,Dhony->country);
    // Kohli->jousey_no=Dhony->jousey_no;
    // delete Dhony;
    // cout<<Kohli->jousey_no<<" "<<Kohli->country;
    Kohli=Dhony;
    delete Dhony;
    
    cout<<Kohli->country;

    return 0;
}