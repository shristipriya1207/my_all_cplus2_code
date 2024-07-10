#include <iostream>
using namespace std;

class counter{
	int x,y,z;
	public:
		counter()
		{
			x=0;y=0;z=0;
		}
		counter(int a, int b, int c){
			x=a; 
			y=b;
			z=c;
		}
		void operator++ ();
		void show()
		{
			cout<<x<<y<<z;
		}
};
void counter::operator++()
{
	x++;
	y++;
	z++;
}



int main() {
	counter c1;
	counter c2(5,6,7);
	++c2;
	c2.show();
	
	return 0;
}
