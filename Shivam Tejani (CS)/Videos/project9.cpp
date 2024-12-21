#include<iostream>
using namespace std;
static int count=0;
class test
{
	public:
		test();
		~test();
};

test::test()
{
	count++;
	cout<<"no of object created: "<<cout<<endl;
}

test::~test()
{
	cout<<"no of object destructed: "<<cout<<endl;
	count--;
}

int main()
{
	test t1,t2,t3,t4,t5;
	return 0;
}
