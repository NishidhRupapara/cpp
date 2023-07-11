#include<iostream>
using namespace std;

class Cricket
{
	protected:
		int t20_over;
		int test_over;
		
	public:
		void match()
		{
			cout<<"this match over:"<<endl;
		}
};

class T20_match : public Cricket
{
	public:
		
		void t20()
		{
			cout<<"enter over of t20 match\t:";
			cin>>t20_over;
			
			cout<<"t20 match's totel over\t\:"<<t20_over<<endl<<"\n\n";
		}
};	
class Test_match : public Cricket
{
	public:
		
		void test()
		{
			cout<<"enter over of test match\t:";
			cin>>test_over;
			
			cout<<"test match's total over\t:"<<test_over<<endl;
		}
};

int main()
{
	
	
	T20_match t;
		t.t20();
	
	Test_match e;
		e.test();	
}
