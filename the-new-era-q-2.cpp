#include<iostream>

using namespace std;

class Employee
{
	public :
	int id;
	char name[100];
	char company_name[100];
	int salary;
	char address[100];
};
main()
{
	int n;
	Employee e[100];
	
	cout<<"Enter size=";
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cout<<"Enter Employee ID=";
		cin>>e[i].id;
		cout<<"Enter Employee Name=";
		cin>>e[i].name;
		cout<<"Enter Employee Company Name=";
		cin>>e[i].company_name;
		cout<<"Enter Employee Salary=";
		cin>>e[i].salary;
		cout<<"Enter Employee Address=";
		cin>>e[i].address;
		cout<<endl;
	}
	
	cout <<"..............................."<<endl;
	
	for (int i=0;i<n;i++)
	{
		cout<<"ID="<<e[i].id<<endl
		<<"Name="<<e[i].name<<endl
		<<"Company Name="<<e[i].company_name<<endl
		<<"Salary="<<e[i].salary<<endl
		<<"Address="<<e[i].address<<endl;
		cout<<endl;
	}
}
