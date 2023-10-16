#include <bits/stdc++.h>
using namespace std;



class Example {

	public:

		static int x;

		static int& getRefX() {

			return x;

		}

};



int Example::x = 10;



int main()

{

	Example::getRefX() = 30;



	cout << Example::x << endl;

}