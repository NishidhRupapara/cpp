#include<iostream>
using namespace std;

//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

class Num
{
	private:
		double a;
		
	public:
		void setdata()
		{
			cout << "enter a: ";
			cin >> a;
		}
		
		Num operator<(Num b)
		{
			Num tmp;
		
			if(a<b.a)
			{
				cout<<"second is big:";
			}
			else if(a==b.a)
			{
				cout<<"both are same:";
			}
			else
			{
				cout <<"first is big:";
			}
			return tmp;
		}
		
		void getdata()
		{
			
		
		}
};

int main()
{
	Num n1,n2,n3;
	
	n1.setdata();
	n2.setdata();
	
	n3 = n1<n2;
	
	n1.getdata();
	n2.getdata();
	n3.getdata();
}
