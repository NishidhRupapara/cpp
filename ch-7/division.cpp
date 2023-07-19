
/*Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
- a number cannot be divided by zero
- a person cannot be able to vote if his/her age is less than 18
- a password cannot be validated if it doesn’t contains an uppercase letter*/

#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout <<" enter a : ";
	cin>>a;
	cout <<"enter b : ";
	cin >>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "divison of " << a << "and "<< b <<" :"<<a/b << endl;
		}
	}
	catch(int n)
	{
		cout << "this can't be divided by "<< n << endl;
		
	}
}

