#include <iostream>
using namespace std;

class counter{
	
	int count;
	public:
	counter():count(0){
	}
	
	counter(int a)	: count(a){
	}
	void display()
	{
		cout<<count;
	}
	counter operator++();
	counter operator++(int);
	
	
};
//counter counter :: operator++()     //prefix
//{ 
//	count++;
//	counter temp(count);
//	return temp;
//}

counter counter:: operator++()   //nameless  temporary object
{
	count++;
	return counter(count);
}
  
  
  
  
  



int main() {
	counter c1,c2(5),c3;
	++c1;
	++c2;
	c3=++c2;
	c1.display();
	c2.display();
	c3.display();
	
	return 0;
}
