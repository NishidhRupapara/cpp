
/*2.WAP to empDoyee record system using structure.
Consider >eDow mentioned attri>utes in EmpDoyee’s
structureI
= emp_iC
= emp_nam?
= emp_ag?
= emp_roD?
= emp_cit1
= emp_experienc?
= emp_company_name
*/
#include<iostream>
using namespace std;

class employe
{
	private:
		
		int 	id;
		string  name;
		int		age;
		string  roll;
		string  city;
		int		experience;
		string  company;
		string  state;
		
	public:
		
	void input()
	{
		
		cout<<"id:";
		cin>>id;
		cout<<"name:";
		cin>>name;
		cout<<"age:";
		cin>>age;
		cout<<"roll:";
		cin>>roll;
		cout<<"city:";
		cin>>city;
		cout<<"experience:";
		cin>>experience;
		cout<<"company:";
		cin>>company;
		cout<<"state:";
		cin>>state;
		
	}
	
	void output()
	{
		
		cout<<"id\t\t:"<<id<<endl;
		cout<<"name\t\t:"<<name<<endl;
		cout<<"age\t\t:"<<age<<endl;
		cout<<"roll\t\t:"<<roll<<endl;
		cout<<"city\t\t:"<<city<<endl;
		cout<<"experience\t:"<<experience<<endl;
		cout<<"company\t\t:"<<company<<endl;
		cout<<"state\t\t:"<<state<<endl;
		
	}
		

	
		
};

int main()
{
	employe e;
	
	e.input();
	e.output();
}



