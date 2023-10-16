#include <bits/stdc++.h>
using namespace std;

class Base {
	virtual void print() { cout << "In Basen"; }
};

class Derived: public Base {
	public: 
		void print() { cout << "In Derivedn"; }
};

int main()
{
	Base *b_ptr = new Derived();
	b_ptr->print();
	
	return 0;
}