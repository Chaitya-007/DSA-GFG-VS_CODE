#include <bits/stdc++.h>
using namespace std;



class Square {

	public:

		int x;

		Square(int x) : x(x*x) {}

};



class Number {

	public:

		int x;

		Number(int x) : x(x) {}

		operator Square() { return Square(x); }

};



int main()

{

	Number num(5);


	
	Square sqr = num;


	
	cout << num.x << " " << sqr.x << endl;


	
	return 0;


}