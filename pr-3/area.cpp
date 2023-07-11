#include<iostream>
using namespace std;

class shape
{
	protected:
	
	double width;
	double height;
	
	public:
		
		shape()
		{
			cout<<"enter width\t:";
			cin>>width;
			cout<<"enter height\t:";
			cin>>height;	
		}	
};

class triangle : public shape
{
	double Triangle;
	public:
		
		void tri_area()
		{
			Triangle = (0.5)*(width*height);
			cout<<"area of triangle\t:"<<Triangle<<endl;
		}	
};

class rectengle : public shape
{
	double Rectengle;
	public:
		
		void rec_area()
		{
			Rectengle = height*width;
			cout<<"area of rectengle\t:"<<Rectengle<<endl;	
		}	
};

int main()
{

	triangle t;
	t.tri_area();
	
	
	rectengle r;
	r.rec_area();
}



