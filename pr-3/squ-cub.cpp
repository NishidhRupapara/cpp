#include<iostream>
using namespace std;

class value
{
	protected:
	
	int a;
	
	public:
		void set_data()
		{
			cout<<"enter a:";
			cin>>a;
		}
};

class square : public value
{
	public:
		void squ()
		{
			cout<<"square of a\t:"
				<<(a*a)<<endl;
		}
};

class cube : public value
{
	public:
		void cub()
		{
			cout<<"cube of a\t:"
				<<(a*a*a)<<endl;
		}
};

int main()
{
	square s;
	s.set_data();
	s.squ();
	
	cube c;
	c.set_data();
	c.cub();
}
