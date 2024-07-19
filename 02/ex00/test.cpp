#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class alpha
{
	private:
		int data;
	public:
		alpha() {}
		alpha(int d) { data = d; }
		alpha(alpha& a)
		{
			this->data = a.data;
			cout << "\nCopy constructor invoked";
		}
		void display()
		{ cout << data; }
		void operator = (alpha& a)
		{
			data = a.data;
			cout << "Assignment operator invoked";
		}
};



int main()
{
	alpha a1(37);
	alpha a2;
	alpha a;
	

	a2 = a1; //invoke overloaded =
	cout << "\na2="; a2.display(); //display a2
	alpha a3(a1); //invoke copy constructor
	// alpha a3 = a1; //equivalent definition of a3
	cout << "\na3="; a3.display(); //display a3
	cout << endl;
	return 0;
}
