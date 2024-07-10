#include <iostream>
using namespace std;
class array{
	int a,b;
	public:
		array(int i,int j){
			a=i;
			b=j;
			cout<<"we are assinging  the value to a and b"<<endl;
			
		}
		void show(){
		
		cout<<a<<"\t"<<b;}
}; 


int main() {
	array arr[3]={ array(1,2),array(3,4),array(5,6)};
	
	for(int i=0;i<3;i++){
		cout<<"\nArray of object: ";
		arr[i].show();
	}
	
	return 0;
}
