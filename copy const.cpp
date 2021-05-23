#include<iostream>
using namespace std;
class code
{
int id;
public:
code(){ }
code(int a)	
{
	id=a;
}
code (code &x)
{
	id=x.id;
}
void display()
{
	cout<<endl<<id;
}
};
int main()
{
	code A(100);
	code B(A);
	A.display();
	B.display();
	}
