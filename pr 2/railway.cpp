#include<iostream>
using namespace std;

class railway
{
	
	int train_number;
	string train_name;
	string destination;
	int train_time;
	string source;
	
	public:
		
		void setdata()
		{
			cout<<"enter train number:";
			cin>>train_number;
			cout<<"enter train_name:";
			cin>>train_name;
			cout<<"enter train destination:";
			cin>>destination;
			cout<<"enter train_time:";
			cin>>train_time;
			cout<<"enter source:";
			cin>>source;
		}
		
		void getdata()
		{
			cout<<train_number<<"\t"
				<<train_name<<"\t"
				<<destination<<"\t"
				<<train_time<<"\t"
				<<source<<endl<<endl;
		}
		
};


int main()
{
	int n;
	
	railway r;
	
	cout<<"enter number:";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		r.setdata();
	}
	for(int i=0;i<n;i++)
	{
		r.getdata();	
	}
	
}













