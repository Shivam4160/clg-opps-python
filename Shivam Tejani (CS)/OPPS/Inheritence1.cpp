#include<iostream>
#include<string>

using namespace std;

class parent{
	protected:
		int id_protected;
};
class child:public parent
{
	public:
		void setID(int id){
			id_protected=id;
		}
		
		void displayID()
		{
			cout<<"id protected is:"<<id_protected<<endl;
		}	
};

int main(){
	
	int id;
	cout<<"Enter id:";
	cin>>id;
	
	child obj1;
	
	obj1.setID(id);
	obj1.displayID();
	
	return 0;
}
