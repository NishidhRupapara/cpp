#include<iostream>
using namespace std;

int main()
{
	int s;
	int hr,min,sec;
	cout<<"enter seconde:";
	cin>>s;
	
	hr=s/3600;
	sec=s%60;
	s=s%3600;
	min=s/60;
	
	cout<<"time\n"<<hr<<":"<<min<<":"<<sec;
}
