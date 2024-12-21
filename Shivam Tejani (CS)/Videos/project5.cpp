#include<iostream>
using namespace std;
class parent
{
	protected:
		int id_protected;
};
class child : public parent
{
	public:
		void setid(int id)
		{
			id_protected=id;	
		}
		void displayid()
		{
			cout<<"id protected is: "<< id_protected<<endl;
		}
};
int main()
{
	child obj1;
	obj1.setid(78);
	obj1.displayid();
	return 0;
}
