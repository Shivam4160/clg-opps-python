#include<iostream>
using namespace std;
class a
{
	public:
		class b
		{
			private:
				int num;
			public:
				void getdata(int n)
				{
					num=n;
				}
				void putdata()
				{
					cout<<"the number is: "<<num;
				}
		};
};

int main()
{
	cout<<"nested classes in c++"<<endl;
	a::b obj;
	obj.getdata(6);
	obj.putdata();
	return 0;
}
