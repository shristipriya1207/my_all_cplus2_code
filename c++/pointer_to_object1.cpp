#include <iostream>
using namespace std;
 class sample{
 	int x,y;
 	public:
 	sample(){
 		x=y=0;
	 }
	 sample(int a,int b){
	 	x=a;
	 	y=b;
	 	
	 }
	 void show(){
	 	cout<<x<<"::"<<y;
	 }
 };



int main() {
	sample s1,s2(2,3);
	sample *ptr,*ptr2;
	ptr = &s1;
	ptr2 = &s2;
	cout<<"S1 :\n";
	ptr->show();
	cout<<"\nS2 :\n";
	ptr2->show();
//	delete ptr;
//	delete ptr2;
	return 0;
}
