#include<iostream>
#include<string>

using namespace std;

class circle{
	private:
		double radious;
		
	public:
		void circle1(double r){
			
			radious = r;
			double area;
			area = 3.14 * radious * radious;
			
			cout<<"Area:"<<area<<endl<<"Radious:"<<radious<<endl; 
		}
		
};

int main(){
	circle obj1;
	double r;
	cout<<"Enter radious of circle:";
	cin>>r;
	obj1.circle1(r);
	return 0;
}
