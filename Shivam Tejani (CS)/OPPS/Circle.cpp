#include<iostream>
#include<string>

using namespace std;

class circle{
	private:
		double radius;
		
	public:
		void circle1(double r){
			
			radius = r;
			double area;
			area = 3.14 * radius * radius;
			
			cout<<"Area:"<<area<<endl<<"Radius:"<<radius<<endl; 
		}
		
};

int main(){
	circle obj1;
	double r;
	cout<<"Enter radius of circle:";
	cin>>r;
	obj1.circle1(r);
	return 0;
}
