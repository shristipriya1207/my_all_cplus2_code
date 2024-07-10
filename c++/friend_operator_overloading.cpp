#include <iostream>
using namespace std;


class A{
	int x,y;
	public:
	A():x(0) ,y(0){
	}
	A(int b ,int c){
		x=b;
		y=c;
	}
	void display()
	{
		cout<<x<<endl;
		cout<<y;
	}
	friend void operator++(A &);
};

void operator++(A &p)
{
	p.x++;
	p.y++;
}


int main() {
	A a1(2,3);
	++a1;
	a1.display();
	return 0;
}
