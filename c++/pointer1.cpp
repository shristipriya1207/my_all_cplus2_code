#include <iostream>
using namespace std;




int main() {
	int arr[]={1,2,3,4,5};
	int *ptr=arr;
	cout<<*(ptr+1*4)<<endl;
		for(int i=0;i<5;i++){cout<<ptr+i*4<<endl;
		}
	cout<<ptr[1];
	cout<<*ptr; //without using loop, we r accessing the element of array
	cout<<*(ptr+1);
	cout<<*(ptr+2);
	for(int i=0;i<5;i++){
		cout<<*ptr<<endl;// with using loop , we r accesing the element of array
		cout<<ptr<<endl;
		cout<<ptr+i*4<<endl;
		ptr++;//arithmatic pointer
	}
	int p=55;
	int *a=&p;
	cout<<a<<endl;
	cout<<*a<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	int **b=&a;
	cout<<b<<endl;
	cout<<*b<<endl;
	cout<<**b<<endl;
	for(int i=0;i<5;i++){
	
	cout<<*(arr+i)<<endl;}
	
	return 0;
}
