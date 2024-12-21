#include<iostream>
#include<string>
using namespace std;

class person
{
	public:
		string name;
		int age;
		
		void intro()
		{
			cout<<"Hello there, My name is "<<name<<"."<<endl;
			cout<<"I'm "<<age<<" years old."<<endl;
			
	}
};	

int main(){
	
	person human1;
	cout<<"Enter your name:";
	cin>>human1.name;
	
	cout<<"Enter your age:";
	cin>>human1.age;
	
	human1.intro();
	
	return  0;
}
