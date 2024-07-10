#include <iostream>
using namespace std;
class sample {
	int a,b;
	public:
		sample():a(0),b(0){
		}
		sample(int x){
			a=b=x;
		}
		sample(int x,int y){
			a=x;
			b=y;
		}
		void show(){
			cout<<a<<":"<<b<<endl;
		}
};


int main() {
	sample s1(4,5) ,s3;
	sample s2=16;
	s3=14;
	cout<<"s1 : ";
	s1.show();
	cout<<"s2 : ";
	s2.show();
	cout<<"s3 : ";
	s3.show();
	return 0;
}
