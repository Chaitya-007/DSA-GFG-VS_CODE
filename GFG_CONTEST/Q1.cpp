#include <bits/stdc++.h>

using namespace std;



class Node

{

	private:

		int x;

	public:

		Node(int x) : x(x) {}

		Node(const Node &v) : Node(v.x) {}

		int getX() { return x; }

		void setX(int x) { this->x = x; } 

};



int main() 

{

	Node t1(5);

	Node t2 = t1;


	
	t2.setX(7);

	cout << t1.getX() << " " << t2.getX() << endl;


	
	return 0;

}