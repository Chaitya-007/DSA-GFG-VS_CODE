#include <bits/stdc++.h>
using namespace std;

class A {
	public:
		virtual void print() { cout << "In An"; }
};

class B : public A {
	public:
		void print() { cout << "In Bn"; }
};

class C : public A {
	public:
		void print() { cout << "In Cn"; }
};

class D : public B, C {
	public:
		void print() { cout << "In Dn"; }
};

int main() 
{
	A *a_ptr = new D();
	a_ptr->print();
	
	return 0;
}