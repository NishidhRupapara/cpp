#include<iostream>
using namespace std;

class Message
{
	public:

			void print(string name1,string name2)
			{
				cout<<"name is "<<name1<<name2<<endl;
			}
		
			void print(string name = "nishidh")
			{
					cout<<"name is "<<name <<endl;
			}
};

int main()
{
	Message m;
	
		m.print("n","m");
		m.print();
}
