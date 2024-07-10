#include <iostream>
using namespace std;
class stud{
	int a;
	public:
		stud( int x)
		{
			a=x;
		}
		void  display(){
			cout<<"a="<<a;
		}
};


int main() {
	stud s1(5);
	s1.display();
	return 0;
}
