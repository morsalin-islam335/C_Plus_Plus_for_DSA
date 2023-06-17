//program to introduce about switch case.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)//check number.
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        default:
            cout<<"Greater than three";
    }
    char s;
    cin>>s;
    switch(s)//check vowel or not.
    {
        case 'a':
            cout<<"vowel"<<endl;
            break;
        case 'e':
            cout<<"vowel"<<endl;
            break;
        case 'i':
            cout<<"vowel"<<endl;
            break;

        case 'o':
            cout<<"vowel"<<endl;
            break;
        
        case 'u':
            cout<<"vowel"<<endl;
            break;
        
        default:
            cout<<"consonant";
    }
    int number;
    cin>>number;
    switch(number%2)
    {
        case 0:
            cout<<"even";
        default:
            cout<<"odd";
    }
}