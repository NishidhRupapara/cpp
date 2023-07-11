
/*Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods
*/
#include<iostream>
using namespace std;


class x
{
	
	protected:
		
		int a;
		int b;
		int c;
		int sum=0;
	
};

class y : protected x
{

	public:
		
		void setdata()
		{
			
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b:";
			cin>>b;
			cout<<"enter c:";
			cin>>c;
				
		}
		
		void getdata()
		{
			
			sum=(a*a*a)+(b*b*b)+(c*c*c);
			cout<<"sum:"<<sum;
			
		}
		
		
	
};


int main()
{
	y y1;
	
	y1.setdata();
	y1.getdata();
}


