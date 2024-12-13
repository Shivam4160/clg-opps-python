#include<iostream>
#include<string>

using namespace std;

class cars{
	public:
		string  brand;
		string  model;
		int year;
};

int main(){
	cars obj1;
	cars obj2;
	
	obj1.brand = "Volkswagen";
	obj1.model = "GT Line";
	obj1.year = 2024;
	obj2.brand = "BMW";
	obj2.model = "X7";
	obj2.year = 2007;
	
	cout<<"Brand:"<<obj1.brand<<endl<<"Model:"<<obj1.model<<endl<<"Year:"<<obj1.year<<endl<<endl<<endl<<endl;
	cout<<"Brand:"<<obj2.brand<<endl<<"Model:"<<obj2.model<<endl<<"Year:"<<obj2.year<<endl;
	return 0;
}
