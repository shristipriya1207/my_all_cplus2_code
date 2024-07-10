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
	sample *ptr= new sample();
	sample *ptr2= new sample(2,3);
	cout<<"FIRST :"<<endl;
	
	ptr->show();
	cout<<"\nSECOND :"<<endl;
	ptr2->show();
	delete ptr;
	delete ptr2;
	return 0;
}
