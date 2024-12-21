#include<iostream>
#include<string>
using namespace std;
int count=0;

class test
{
	public:
		test();
		~test();
	
};	

test::test()
		{
			count++;
			cout<<"contructor is called "<<count<<" times."<<endl;
		}
		
test::~test()
		{
			cout<<"destructor is called "<<count<<" times."<<endl;
			count--;
		}

int main(){
	
	test obj1 , obj2,obj3,obj4,obj5,obj6,obj7;
	
	return  0;
}
