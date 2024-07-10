#include <iostream>
using namespace std;
 const int MAX=3;
class stack{
	public:
	int top;
	int st[MAX];
	stack(){
		top=-1;
	}
	void push(int p){
		st[++top]=p;
	}
	int pop(){
		return st[top--];
	}
};


class stack2 : public stack{
	public:
	void push(int p){
		if(top> MAX-1){
			cout<<"stack is full";
			exit(1);
		}
		stack :: push(p);
	}
	
	int pop(){
		if(top<0){
			cout<<"stack is empty";
			exit(1);
		}
		return stack ::pop();
	}
	
};



int main() {
	stack2 s1;
	s1.push(23);
	s1.push(24);
	s1.push(25);
	s1.push(26);
//	s1.push(27);
	cout<<"\n"<<s1.pop();
	cout<<"\n"<<s1.pop();
	cout<<"\n"<<s1.pop();
	cout<<"\n"<<s1.pop();
	cout<<"\n"<<s1.pop();
	
	
	return 0;
}
