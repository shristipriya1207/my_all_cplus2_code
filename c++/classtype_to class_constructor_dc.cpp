#include <iostream>
using namespace std;
 class meter{
 	float mtr;
 	public:
 		meter():mtr(0){
		 }
		 
		 meter(float x):mtr(x){
		 }
		 float getmeter(){
		 	return mtr;
		 }
		 
		 void show_meter(){
		 	cout<<"meter : "<<mtr;
		 }
 };
  class kilometer{
  	float km;
  	public:
  		kilometer():km(0){
  			
		  }
		  
		  kilometer( meter m){
		  	float m1 ;
		  	m1=m.getmeter();
		  	km=m1/1000;
		  }
		  
		  void showkm(){
		  	cout<<"km : "<<km;
		  }
  };



int main() {
int p;
cout<<"enter meter";
cin>>p;
meter m2(p);
m2.show_meter();
kilometer k1;
k1=m2;
k1.showkm();	
	
	
	return 0;
}
