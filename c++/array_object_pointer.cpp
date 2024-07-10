#include <iostream>
using namespace std;
 class sample{
 	int id;
 	float height;
 	public:
 		void setdata(int a,float b){
 			id=a;
 			height=b;
 			
		 }
		 void getdata(){
		 	cout<<"id :"<<id<<"height :"<<height<<endl;
		 }

  };



int main() {
	int n;
	int a;
	float b;
	cout<<"number of object :";
	cin>>n;
	sample *ptr=new sample[n];
	 sample *ptrTemp= ptr;
	for(int i=0;i<n;i++){
		cout<<"Enter id :";
		cin>>a;
		cout<<"Enter height :";
		cin>>b;
		ptr->setdata(a,b);
		ptr++;
		
	}
	for(int i=0;i<n;i++){
		ptrTemp->getdata();
		ptrTemp++;
		
	}
	return 0;
}
