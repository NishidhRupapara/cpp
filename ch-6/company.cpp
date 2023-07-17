#include<iostream>
using namespace std;

/*Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.
*/


class Admin 
{
	protected:
		
	string	company_name;
	int		manager_salary;
	int		employee_salary;
	int		total_staff;
	double	annual_revenue;
	string 	can_ter;
	
	public:
		
		void set_data()
		{
			cout << "company_name :";
			cin  >> company_name;
			cout << "manager_salary :";
			cin  >> manager_salary;
			cout << "employee_salary :";
			cin  >> employee_salary;
			cout << "total_staff :";
			cin  >> total_staff;
			cout << "annual_revenue :";
			cin  >> annual_revenue;
			cout << "can_ter :";
			cin  >> can_ter;
			
		}
		
		void get_admin()
		{
			cout	<<	"company_name\t:"	<<	company_name	<<	endl
					<<	"manager_salary\t:" <<	manager_salary	<<	endl
					<<	"employee_salary\t:"<<	employee_salary <<	endl
					<<	"total_staff\t:"	<<	total_staff		<<	endl
					<<	"annual_revenue\t:" <<	annual_revenue	<<	endl
					<<	"can_ter\t\t:"		<<	can_ter			<<	endl;
		}
};

class Manager : public Admin
{
	public:
		void set_man()
		{
			cout << "company_name :";
			cin  >> company_name;
			cout << "manager_salary :";
			cin  >> manager_salary;
			cout << "employee_salary :";
			cin  >> employee_salary;
			cout << "total_staff :";
			cin  >> total_staff;
			cout << "annual_revenue :";
			cin  >> annual_revenue;
			cout << "can_ter :";
			cin  >> can_ter;
			
		}
		
		void get_man()
		{
			cout	<<	"\n\n\n\nmanager_salary\t:" <<	manager_salary	<<	endl
					<<	"employee_salary\t:"<<	employee_salary <<	endl
					<<	"total_staff\t:"	<<	total_staff		<<	endl
					<<	"can_ter\t\t:"		<<	can_ter			<<	endl;
		}
		
};

class Employee : public Manager
{
	public:
		void get_emp()
		{
			cout		<<	"\n\n\nemployee_salary\t:"<<	employee_salary <<	endl
						<<	"total_staff\t:"	<<	total_staff		<<	endl;
		}
};

int main()
{
	Admin a;
	Manager m;
	Employee e;
	
	a.set_data();
	a.get_admin();
	m.get_admin();
	e.get_emp();
}


