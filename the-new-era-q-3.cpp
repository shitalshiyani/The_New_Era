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
	Time t,t1,t2;
	cout<<"Enter First Time="<<endl;
	cout<<"Enter Time in Hour=";
	cin>>t1.hour;
	cout<<"Enter Time in Minute=";
	cin>>t1.minute;
	cout<<"Enter Time in Second=";
	cin>>t1.second;
	
	cout<<"Enter Second Time="<<endl;
	cout<<"Enter Time in Hour=";
	cin>>t2.hour;
	cout<<"Enter Time in Minute=";
	cin>>t2.minute;
	cout<<"Enter Time in Second=";
	cin>>t2.second;
    
    
    t.second=t1.second+t2.second;
    t.minute=t1.minute+t2.minute+(t.second/60);
    t.hour=t1.hour+t2.hour+(t.minute/60);
    
    t.minute%=60;
    t.second%=60;
    
    cout<<"The Final Time is=";
    cout<<t.hour<<":"<<t.minute<<":"<<t.second;
    
	
}
