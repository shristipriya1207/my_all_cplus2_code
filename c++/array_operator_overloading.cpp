#include <iostream>
using namespace std;
 class array{
 	int data[25],size;
 	public:
 	array():size(0){
	 }
	 array(int s ){
	 	size=s;
	 	
	 }
	 void input(){
	 	for(int i=0;i<size;i++)
	 	  cin>>data[i];
	 }
	 array operator+(array);
	 void show()      
	    {
            for(int i=0;i<size;i++)
	        	cout<<data[i]<< " ";
	 }
 };

array array::operator+(array a){
	array t(size);
	for(int i=0;i<size;i++){
	
	t.data[i]= data[i]+ a.data[i];
	
}
return t;
}

int main() {
	array a1(5), a2(5),a3(5);
	cout<<"enter the element for a1:"<<endl;
	a1.input();
	cout<<"enter the element for a2:"<<endl;	
	a2.input();
	
	a3=a1+a2;
	cout<<"a1"<<" ";
	a1.show();
	cout<<"a2"<<" ";
	a2.show();
	
	cout<<"a2"<<" ";
	
	a3.show();
	
	
	return 0;
}
