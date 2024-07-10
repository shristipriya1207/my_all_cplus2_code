#include <iostream>
using namespace std;

class sample{
	double base;
	int expo;
	double val;

public:
sample():base(0),expo(0),val(0){
}
sample(double b){
	base=b;
	expo=1;
	val=b;
}
sample(double b, int e){
	base=b;
	expo=e;
	val=1;
	if(expo!=0){
		for( ; expo>0;expo--){
			val=val*base;
		}
	}
}
operator double(){
	return val;
}	
	
};



int main() {
	sample s1(7), s2(4,3);
	double a,b;
	a=s1;
	b=s2;
	
	cout<<"a : "<<a<<" b : "<<b;
	return 0;
}
