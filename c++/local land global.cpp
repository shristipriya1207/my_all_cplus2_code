#include <iostream>

using namespace std;
int glo=10;
void sum()
{
cout<<glo;	
}
int main( ) {
	sum();
	cout<<glo;
	glo=20;
	cout<<glo;
	int a=6;
	int b=4;
	cout<<" the value of a\n"<<a<<"\nthe value of b\n"<<b;
	sum();
	return 0;
}
