#include <bits/stdc++.h>
using namespace std;



class Base {

public:

void print() {
 cout << "In Base\n"; }

};


class Derived {

public:

void print() {
 cout << "In Derived\n"; }

};



int main()

{

Base *b_ptr = new Derived();

Derived *d_ptr = new Base();


b_ptr->print();

d_ptr->print();


return 0;

}