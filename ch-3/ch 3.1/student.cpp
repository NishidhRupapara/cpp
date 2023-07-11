#include<iostream>
using namespace std;

class student
{
	private:
		
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string collage;
		
	public:
		
		void setdata()
		{
			cout<<"enter id\t:";
			cin>>id;
			cout<<"enter name\t:";
			cin>>name;
			cout<<"enter age\t:";
			cin>>age;
			cout<<"enter course\t:";
			cin>>course;
			cout<<"enter city\t:";
			cin>>city;
			cout<<"enter email\t:";
			cin>>email;
			cout<<"enter collage\t:";
			cin>>collage;
		}
		
		void getdata()
		{
			cout<<"id\t:"<<id<<endl
			<<"name\t:"<<name<<endl
			<<"age\t:"<<age<<endl
			<<"course\t:"<<course<<endl
			<<"city\t:"<<city<<endl
			<<"email\t:"<<email<<endl
			<<"collage\t:"<<collage<<endl;
		}
		
		
};

int main(){
	
	student s;
	for(int i=1;i<=5;i++)
	{
		
	s.setdata();
	s.getdata();
	}
}

