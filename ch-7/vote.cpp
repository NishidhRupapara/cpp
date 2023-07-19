#include<iostream>
using namespace std;

int main(){
	int age;
	
	cout <<"please!!!" << endl << "enter your age :";
	cin>>age;
	
	try
	{
		if(age<18)
		{
			throw age;
		}
		else
		{
			cout << endl << " you are able to vote " << endl;
		}
	}
	catch(int age)
	{
		cout << " you are dose not able to vote ";
	}
}

