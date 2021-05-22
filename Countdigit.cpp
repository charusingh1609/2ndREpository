#include<iostream>
using namespace std;
int main(){
	    int n;
	    cout<<"enter the vale of n";
	    cin>>n;
		int count=0;
		while(n!=0)
		{
		n/=10;
		count++;
		}
		//return count;
		cout<<"no. of digit is : "<<count;
	
	
}

