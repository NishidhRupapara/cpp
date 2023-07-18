#include<iostream>
using namespace std;

class Math{
	private:
		double r;
		double l;
		double b;
		
	public:
		
		virtual void calculate() = 0;
		
		void get_data()
		{
			double A;
			double B;
			double C;
			int choice;
			
			A = 3.14*r*r;
			B = 0.5*l*b;
			C = l*b;
			
			do
			{
				cout << "1 => area of circle"   << endl
					 << "2 => area of tringle"  << endl
					 << "3 => area of rectengle"<< endl;
					 
				switch(choice)
				{
					case 1:
							cout << "enter r:";
							cin  >> r;
							cout << "area of circle\t:" << A << endl;
							break;
						
					case 2:
							cout << "enter l:";
							cin  >> l;
							cout << "enter b:";
							cin  >> b;
							cout << "area of tringle\t:" << B << endl;
							break;
							
					case 3:
							cout << "enter l:";
							cin  >> l;
							cout << "enter b:";
							cin  >> b;
							cout << "area of rectengle\t:" << C << endl;
							break;
					
					case 4:
						break;
				}
				
			}while(choice == 4);
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
	
	m.get_data();
}
