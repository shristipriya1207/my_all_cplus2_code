#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3;
	cout<<"enter three number";
	
	cin>>num1>>num2>>num3;
	if(num1>=num2 && num1>=num3)
	cout<<" the greatest number is " <<num1;
	else if(num2>=num1 && num2>=num3)
	cout<<"the greatest number is "<<num2;
	else
	cout<<"the greatest number is "<<num3;
	return 0;
}
