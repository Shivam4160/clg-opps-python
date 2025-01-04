#include <iostream>
#include <string>
using namespace std;


int main() {
    
    int num1 = 51,num2=15;
    
    cout<<"Before swap\n num1="<<num1<<"\n num2="<<num2;
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    cout<<"\nAfter swap\n num1="<<num1<<"\n num2="<<num2;
    
    return 0;
}
