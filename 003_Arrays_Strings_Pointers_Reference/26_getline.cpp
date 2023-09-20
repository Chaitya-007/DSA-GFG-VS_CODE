#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name\n";
    getline(cin,name);
    cout<<"Your name is "<<name<<"\n";

    string nick_name;
    cout<<"Enter your name\n";
    getline(cin,nick_name,'$');
    cout<<"Your name is "<<nick_name;
    return 0;
}