#include<iostream>
using namespace std;
class circle{
	public:
		double radius;
		double compute_area()
		{
			return 3.14*radius*radius;
		}
};
int main()
{
	circle obj;
	obj.radius=5;
	cout<<"Radius is "<<obj.radius<<endl;
	cout<<"Area is "<<obj.compute_area();
	return 0;
}
