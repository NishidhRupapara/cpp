#include<iostream>
using namespace std;

class Divison{
	
	int a,b;
	
	public:
		void set_data()
		{
			cout<<"enter a : ";
			cin >>a;
			cout<<"enter b : ";
			cin >>b;
		}
		void get_data()
		{
			try
			{
				if(b==0)
				{
					throw 0;
				}
				else
				{
					cout<<"divison : "<<a/b<<endl;
				}
			}
			catch(int c)
			{
				cout<<"can't divided by "<<c<<endl;
			}
			catch(...)
			{
				cout <<" genral exception ";
			}
		}
};

int main()
{
	Divison d;
	
	d.set_data();
	d.get_data();
}
