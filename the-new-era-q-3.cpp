#include<iostream>

using namespace std;

class Time
{
	public :
	int hour;
	int minute;
	int second;
};
main()
{
	Time t;
	cout<<"Enter Time in Seconds=";
	cin>>t.second;
	
	t.hour=t.second/3600;
	t.minute=(t.second%3600)/60;
	t.second=(t.second%3600)%60;
    
	cout<<"The Final Time is=";
        cout<<t.hour<<":"<<t.minute<<":"<<t.second;	
}
