#include<iostream>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
	public:
		student()
		{
			cout<<"Enter roll no:";
			cin>>rno;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter fee:";
			cin>>fee;
		}
		
		void display();
};

void student :: display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}

int main()
{
	student s;
	s.display();
	return 0;
}
