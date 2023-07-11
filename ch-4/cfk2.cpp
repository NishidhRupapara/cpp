/*Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by 
implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method
*/

/*
      f= ((c*9)/5) +32;
      k= c+273.15;
*/

#include<iostream>
using namespace std;



class P 
{
	protected: 
			
	double t;
	double f;
	double k;
	
	public:
		
		void setdata()
		{
			cout << "enter temperature: ";
			cin>>t;
		}
	
	
};

class Q : public P
{
	public:
		
		
		void getf()
		{
			f=((t*9)/5)+32;
			
			cout<<"Fehrenheit:"<<f;
		}
	
};

class R : public Q
{
	public:
		
		void getk()
		{
			k= t+273.15;
			
			cout<<"Kelvin:"<<k;
		}
};

int main()
{
	
	R r1;
	r1.setdata();
	r1.getf();
	r1.getk();
	
}
