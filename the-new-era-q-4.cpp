#include<iostream>

using namespace std;

class House
{
	public :
	int hn;
	char add[100];	
	int lr;
	int br;
	int wr;
	int rs;
	int l;
	int b;
};
main()
{
   House h;
   
   cout<<"Enter Your House Details"<<endl;
   cout<<"Enter House Number=";
   cin>>h.hn;
   cout<<"Enter House Address=";
   cin>>h.add;
   cout<<"Enter Number Of Living Room=";
   cin>>h.lr;
   cout<<"Enter Number Of Bedroom=";
   cin>>h.br;
   cout<<"Enter Number Of Washroom=";
   cin>>h.wr;
   cout<<"Enter Bedroom Size=";
   cin>>h.l>>h.b;
   
   cout<<".................................."<<endl;
   
   cout<<"House Number="<<h.hn<<endl
   <<"House Address="<<h.add<<endl
   <<"Number Of Living Room="<<h.lr<<endl
   <<"Number Of Bedroom="<<h.br<<endl
   <<"Number Of Washroom="<<h.wr<<endl
   <<"Bedroom Size="<<h.l<<"*"<<h.b<<endl;
   cout<<endl;
   	
}
