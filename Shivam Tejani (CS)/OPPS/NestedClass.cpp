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
	int num;
	cout<<"nested classes in c++"<<endl<<"enter number:";
	cin>>num;
	a::b obj;
	obj.getdata(num);
	obj.putdata();
	return 0;
}

