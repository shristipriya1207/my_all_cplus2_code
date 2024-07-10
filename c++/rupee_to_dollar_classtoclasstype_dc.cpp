#include <iostream>
using namespace std;

class rupee{
	float rs;
	public:
		rupee():rs(0){
		}
		rupee(float x):rs(x){
		}
		float get_rs(){
			return rs;
		}
		void show_rupee(){
			cout<<"Rupee : "<<rs;
		}
		
		
		
};




class dollar{
float dol;
public:
	dollar():dol(0){
	}
	dollar(int c):dol(c){
	}
	dollar(rupee r1){
		float m=r1.get_rs();
		dol=m/64;
	}
	void show_dollar(){
		cout<<"dollar : "<<dol;
	}
	operator rupee(){
	
	rupee r3(dol*64);
	return r3;
		
}
};

int main() {
	float p;
	cout<<"enter rupees : ";
	cin>>p;
	rupee r2(p);
	r2.show_rupee();
	dollar d2;
	d2=r2;
	d2.show_dollar();
	float p2;
	cout<<"enter dollar : ";
	cin>>p2;
	dollar d3(p2);
	d3.show_dollar();
	rupee r3;
	r3=d3;
	r3.show_rupee();
	return 0;
}
