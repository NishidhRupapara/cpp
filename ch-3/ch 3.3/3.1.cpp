#include<iostream>
using namespace std;

class Company
{
	
	private:
		
		int id;
		string name;
		int staff_quantity;
		int revenue;
		int exporte;
		int import;
		string ceo_name;
		
	public:
		
		
		Company(int id,string name)
		{
			this->id=id;
			this->name=name;
			
			cout<<"enter id\t:";
			cin>>id;
			cout<<"enter name\t:";
			cin>>name;
			
		}
		void getdata()
		{
			cout<<id<<"\t"<<name;
		}
	
			
	
};


int main()
{
	int n;
	
	cout<<"enter nomber:";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		Company c(1,"jell");
		
		
		c.getdata();
		
		
	}
}


























