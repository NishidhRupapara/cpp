#include<iostream>
using namespace std;

class customer
{
	private:
		
		int id;
		string name;
		int age;
		string city;
		int mobilno;
		string simvalidity;
		string plane;
		
	public:
		
		void setdata()
		{
			cout<<"enter id\t:";
			cin>>id;
			cout<<"enter name\t:";
			cin>>name;
			cout<<"enter age\t:";
			cin>>age;
			cout<<"enter city\t:";
			cin>>city;
			cout<<"enter mobileno\t:";
			cin>>mobilno;
			cout<<"enter simvalidity\t:";
			cin>>simvalidity;
			cout<<"enter planename\t:";
			cin>>plane;
		}
		
		void getdata()
		{
			cout<<"id\t:"<<id<<endl
			<<"name\t:"<<name<<endl
			<<"age\t:"<<age<<endl
			<<"city\t:"<<city<<endl
			<<"mobileno\t:"<<mobilno<<endl
			<<"simvalidity\t:"<<simvalidity<<endl
			<<"planename\t:"<<plane<<endl;
		}
		
				
		
};


int main()
{
	customer c;
	
		for(int i=1;i<=5;i++)
		{
			c.setdata();
		}
		
		for(int i=1;i<=5;i++)
		{
			c.getdata();
		}
}
