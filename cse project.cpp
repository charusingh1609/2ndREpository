//welcome to hospital management system//
#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class password
{
	string code;
	int i;
		
	public:
		void get_password()
	    {
	      xy:
			cout<<"\nenter the password";
			cin>>code;
		
		
		
		
			if(code=="1234")
			{
				
				cout<<"correct";
			}
			else
			{
				cout<<"incorrect password";
				cout<<"\nplease try again!!!";
				goto xy;
			}
		
		}
	
		
};
class patient
{
	int ID;
	string firstname;
	string lastname;
	int age;
	char bloodgroup[5];
	char gender;
	public:
	show_data()
	{
	cout<<"enter the ID,firstname,lastname,age,bloodgroup and gender of the patient"<<endl;
	cin>>ID>>firstname>>lastname>>age>>bloodgroup>>gender;
	
	}
};


int main()
{
	password h;
	h. get_password();
     patient p;
     p.show_data();
	
}
