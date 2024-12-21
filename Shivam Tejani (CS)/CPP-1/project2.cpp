#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		string name;
		int age;
		
		void intro()
		{
			cout<<"hi, my name is "<<name<<" and i am "<<age<<" years old"<<endl;
		}
};
int main(){
	person p1;
	p1.name="alpha";
	p1.age=29;
	p1.intro();
	return 0;
}
