#include<iostream>
using namespace std;

//id name type rating location establishyear staff qoulaty
//room



class hotel
{
	
	int id;
	string name;
	
	string type;
	int rate;
	static string city;
	double establish_year;
	int staff_quantity;
	int room_quantity;
	
	public:
		
		void setdata()
		{
			cout<<"enter id\t:";
			cin>>id;
			cout<<"enter name\t:";
			cin>>name;
			cout<<"enter rate\t:";
			cin>>rate;
			cout<<"enter establish_year\t:";
			cin>>establish_year;
			cout<<"enter staff_quantity\t:";
			cin>>staff_quantity;
			cout<<"enter  room_quantity\t:";
			cin>>room_quantity;
		}
		
		void gettabdata()
		{
			cout<<"id\t"<<"name\t"<<"rate\t"<<"city\t"<<"establish_year\t"<<"staff_quantity\t"<<"room_quantity\t"<<"type"<<endl;
			
		}
		void getdata()
		{
			cout<<id<<"\t"<<name<<"\t"<<rate<<"\t"<<city<<"\t"<<establish_year<<"\t"<<staff_quantity<<"\t"<<room_quantity<<"\t"<<type<<endl;
		}
		
};

string hotel :: city = "surat";

int main()
{
	int n;
	
	cout<<"enter number\t:";
	cin>>n;
	
	hotel h[n];
	
	for(int i=0;i<n;i++)
	{
		h[i].setdata();
	}
	for(int i=0;i<n;i++)
	{
		h[i].getdata();
	}
	
}





