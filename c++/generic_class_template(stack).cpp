#include <iostream>
using namespace std;

//const int max= 50;
template <class type>
class stack{
	type st[50];
	int top;
	public:
		stack(){
			top=-1;
		}
		void push(type x);
		type pop();
		
};
template <class type>
void stack<type> :: push(type x){
	st[++top]=x;
}
template<class type>
type stack<type> :: pop(){
	return st[--top];
}


class student{
	int regno;
	string name;
	public:
		student(){
		}
		student(int r, string n){
			regno=r;
			name=n;
		}
		void display(){
			cout<<"regno : "<<regno;
			cout<<"name :"<<name<<endl;
		}
};



int main() {
	stack <double> stack_db;
	stack_db.push(12.3);
	stack_db.push(98.8);
	cout<<"contents of stack :"<<endl;
	cout<<stack_db.pop()<<endl;
	cout<<stack_db.pop()<<endl;
	
    stack <student> stack_stud;
    student s1(1,"anil"), s2(2,"anjali"),s3(3,"ravi");
    stack_stud.push(s1);
    stack_stud.push(s2);
    stack_stud.push(s3);
cout<<"content of student stack :";
	student new_stud= stack_stud.pop();
	new_stud.display();
	new_stud= stack_stud.pop();
	new_stud.display();
	new_stud= stack_stud.pop();
	new_stud.display();
	
	return 0;
}
