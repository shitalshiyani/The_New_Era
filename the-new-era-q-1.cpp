#include<iostream>

using namespace std;

class Distance
{
	public :
	float feet;
	float inch;
};
main()
{
	
	Distance d1,d2,d;
	
	cout<<"Enter Distance d1 in feet=";
	cin>>d1.feet;
	cout<<"Enter Distance d1 in inch=";
	cin>>d1.inch;
	
	cout<<"Enter Distance d2 in feet=";
	cin>>d2.feet;
	cout<<"Enter Distance d2 in inch=";
	cin>>d2.inch;
	
	d.feet= d1.feet+d2.feet;
	d.inch= d1.inch+d2.inch;
	
	while((d.inch)>=12)
	{
		d.inch= d.inch-12;
		d.feet++;
	}
	
	cout<<"Total Distance are ="<<d.feet<<"."<<d.inch<<endl;
}
