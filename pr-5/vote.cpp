#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout <<"enter your age : ";
	cin >>age;
	
	try
	{
		if(age<18)
		{
			throw 0;
		}
		else
		{
			cout << " you are eligible to vote "<<endl;
		}
	}
	catch(int n)
	{
		cout << " you are not eliogible to vote ";
	}
}
