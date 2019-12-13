#include<iostream>
using namespace std;
class Person
{
	private:
		string name;
		int age;
		char  gender;
		public:
		Person()
		{
		    name=" ";
			age=0;
			gender=' ';	
		}	
		Person (string n, int a, char g)
		{
			name=n;
			age=a;
			gender=g;
		}
		void displayinfo()
		{
			cout<<"Name: "<<name<<"\nAge: "<<age<<"\nGender: "<<gender;
		}
};
class Employee
{
	private:
	int salary;
	string company;
	public:
	Employee(int s, string c)
	{
		salary=s;
		company=c;
	}
	void displayinfo()
	{
		cout<<"\nSalary: "<<salary<<"\nCompany: "<<company;
	}
};
class programmer: Person, Employee
{
	private:
	string language;
	int projects;
	public:
	programmer(string n, int a, char g, int s, string c, string l, int p): Person (n, a, g) ,	Employee(s, c)
	{
		language=l;
		projects=p;
	}
	void displayinfo()
	{
		Person::displayinfo();
		Employee::displayinfo();
		cout<<"\nLanguage: "<<language<<"\nProjects: "<<projects<<endl;
	}
};
class manager: Person, Employee
{
	private:
	int experience;
	public:
	manager(string n, int a, char g, int s, string c, int e): Person (n, a, g) ,	Employee(s, c)
	{
		experience=e;
	}
		void displayinfo()
	{
		Person::displayinfo();
		Employee::displayinfo();
		cout<<"\nExperince: "<<experience;
	}
};
int main()
{ 
 programmer p("ali",23,'m',22000,"Asoft","java",5); 
 p.displayinfo(); 
 cout<<endl; 
 manager m("ahmad",30,'m',25000,"ATech",3); 
 m.displayinfo(); 
} 
