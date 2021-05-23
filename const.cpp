#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		int marks;
		public:
			student()
			{
				roll=0;
				marks=0;
			}
			student(int r,int m=10)
			{
				roll=r;
				marks=m;
			
			}
			void show()
			{
				cout<<"\n roll is :"<<roll;
				cout<<"\n marks is :"<<marks;
				
			}
};
int main()
{
	student s1;
	s1.show ();
	student s2(3);
	s2.show();
	student s3(4,5);
	s3.show();
}
