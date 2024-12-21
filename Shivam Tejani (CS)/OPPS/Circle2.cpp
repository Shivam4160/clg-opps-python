#include<iostream>
#include<string>

using namespace std;

class circle{
	public:
		double radius;
		double area;
		
		int circle1(){
			return 3.14 * radius * radius;
		}
		
};

int main(){
	circle obj1;
	
	cout<<"Enter radius of circle:";
	cin>>obj1.radious;
	
	cout<<"Radius of the circle is "<<obj1.radius<<"."<<endl; 
	cout<<"Area of the circle is "<<obj1.circle1()<<"."<<endl;

	
	return 0;
}

