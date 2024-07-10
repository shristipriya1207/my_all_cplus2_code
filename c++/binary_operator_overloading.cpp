#include <iostream>
using namespace std;

class complex{
	int real,imag;
	public:
		complex(){
		
		real=imag=0;}
		complex(int a, int b){
			real=a;
			imag=b;
		}
		complex operator+(complex);
		void show()
		{
			cout<<"real="<<real<<endl;
			cout<<"imag="<<imag<<endl;
			
		}
		
		
		
};
complex complex :: operator+(complex c){
			complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
			
			
		}


int main() {
	complex c1(5,6);
	complex c2(3,4),c3;
	c3=c1+c2;     //c3=c1.operator++(c2);
	c1.show();
	c2.show();
	c3.show();
	return 0;
}
