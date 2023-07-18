#include<iostream>
using namespace std;

/*Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such like:
- the area of a circle   => 22/7 r2
- the area of a triangle => 1/2 l*b
- the area of a rectangle=> l*b
- use one single pure virtual function named calculate() to perform all the above operations*/

class Math{
	private:
		double r;
		double l;
		double b;
		
	public:
		
		virtual void calculate() = 0;
		void set_data()
		{
			cout << "enter r:";
			cin  >> r;
			cout << "enter l:";
			cin  >> l;
			cout << "enter b:";
			cin  >> b;
		}
		
		void get_data()
		{
			double A;
			double B;
			double C;
			
			A = 3.14*r*r;
			B = 0.5*l*b;
			C = l*b;
			
			cout << "area of circle\t:"	  << A << endl
				 << "area of tringle\t:"  << B << endl
				 << "area of rectengle\t:"<< C << endl;
		}
		
};

class Math2 : public Math
{
	public:
	void calculate()
	{
		cout << "walcome" << endl;
	}
};

int main()
{
	Math2 m;
	
	m.calculate();
	m.set_data();
	m.get_data();
}
