#include <iostream>
using namespace std;

class sample{
	
	public:
		int var=20;
	virtual	void getdata(){
			cout<<"heloo my number is :"<<var<<endl;
		}
		void setdata(){
			cout<<"priya :"<<var<<endl;
		}
};
class child : public sample{
	public:
		int var1=30;
		void getdata(){
			cout<<"shristi hello id is :"<<var1<<endl;	
				}
			void setdata(){
			cout<<"priya priya :"<<var1<<endl;
		}
};

int main() {
sample* ptr;
	child c1;
	ptr = &c1;
	ptr->getdata();
	ptr->setdata();
	return 0;
}
