#include<iostream>
using namespace std;

/* a password cannot be validated if it doesn’t contains an uppercase letter */

int main()
{
	string password;
	
	cout << "enter your password : ";
	cin  >> password;
	
	try
	{
		for(int i;i<10;i++)
		{
			if(password >= "A" || password <= "Z")
			{
				throw password;
			}
			else
			{
				cout << "your password is valid " << endl;
			}
		}
		
	}
	
		catch(string p)
		{
				cout << "your password is not valid " << endl;			
		}
}
