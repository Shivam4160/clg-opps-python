#include<iostream>
using namespace std;
inline int add(int a,int b=14)
{
	return a*b;
}
int main()
{
	cout<<"multiply: "<<add(5)<<endl;
	cout<<"multiply: "<<add(5,26)<<endl;
	return 0;
}

