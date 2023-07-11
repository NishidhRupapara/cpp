#include<iostream>
using namespace std;

class RBI
{
	protected:
		double roi = 6.5;
		
	public:
		
	void getroi()
	{
		cout<<"roi of RBI\t:"<<roi<<endl;
	}
};

class SBI : public RBI
{
	public:
	double sbi_roi = roi + 1.1;
	
	public:
		
	void Sbi_roi()
	{
		cout<<"roi of SBI\t:"<<sbi_roi<<endl;	
	}	
};

class BOB : public RBI
{
	public:
	double bob_roi = roi + 1.25;
	
	public:
		
	void Bob_roi()
	{
		cout<<"roi of BOB\t:"<<bob_roi<<endl;	
	}	
};

class ICICI : public RBI
{
	public:
	double icici_roi = roi + 0.5;
	
	public:
		
	void Icici_roi()
	{
		cout<<"roi of ICICI\t:"<<icici_roi<<endl;	
	}	
};


int main()
{
	SBI s;
	s.getroi();
	s.Sbi_roi();
	
	BOB b;
	b.getroi();
	b.Bob_roi();
	
	ICICI i;
	i.getroi();
	i.Icici_roi();	
}








