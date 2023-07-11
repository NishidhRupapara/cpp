// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Distance
{
    public:
      int feet;
      int inch;

};
int main()
{
    Distance d1,d2,sum;
    cout <<"Enter first distance \n";
    cout << "Enter feet\n";
    cin >>d1.feet;
    
    cout <<"Enter inch\n";
    cin >>d1.inch;
    
    cout <<"Enter second distance \n";
    cout << "Enter feet\n";
    cin >>d2.feet;
    
    cout <<"Enter inch\n";
    cin >>d2.inch;
     
     sum.feet = d1.feet+d2.feet;
     sum.inch = d1.inch+d2.inch;
     
     while(sum.inch>12)
     {
     	
	     if(sum.inch>=12)
	     {
	         sum.inch=sum.inch-12;
	         sum.feet=sum.feet+1;
	     }
 	}
     
     cout << "sum of distance:"
     << sum.feet<<"feet"<<sum.inch
     <<"inch";
     
     cout << endl;
    
}


