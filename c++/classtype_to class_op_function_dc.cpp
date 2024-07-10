#include <iostream>
using namespace std;

class kilometer{
	float km;
	public:
		kilometer():km(0){
		}
		
		kilometer(float km_val){
			km=km_val;
		}
		void show_km(){
			cout<<"kilometer : "<<km;
		}
	
};

class meter{
	float mtr;
	public:
	meter():mtr(0){
	}
	
	meter( float m){
		mtr=m;
	}
	operator kilometer(){
		kilometer k(mtr/1000);
		return k;
	}
	void show_meter(){
		cout<<"meter  : "<<mtr;
	}
};





int main() {
	float p;
	cout<<"enter meters";
	cin>>p;
	meter m1(p);
	m1.show_meter();
	kilometer k1;
	k1=m1;
	k1.show_km();
	
	return 0;
}
