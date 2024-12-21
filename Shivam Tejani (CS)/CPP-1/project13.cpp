#include<iostream>
using namespace std;
class employee{
	int id;
	char name[35];
	public:
	void getdata();
	void putdata();
};
void employee::getdata()
{
	cout<<"enter id: ";
	cin>>id;
	cout<<"enter name: ";
	cin>>name;
}
void employee::putdata()
{
	cout<<id<<" ";
	cout<<name<<" ";
	cout<<endl;
}
int main()
{
	employee emp[35];
	int n,i;
	cout<<"enter num of employee: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	emp[i].getdata();
	cout<<"employee data -"<<endl;
	
	for(i=0;i<n;i++)
	emp[i].putdata();
}
