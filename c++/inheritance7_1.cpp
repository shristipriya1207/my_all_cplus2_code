#include <iostream>
using namespace std;

class person{

	public:
			int id;
     	string name;
		void person_accept(int n){
			for(int i=0;i<n;i++){
				cout<<"Enter the person id : ";
				cin>>id;
				cout<<"Enter the person name : ";
				cin>>name;
			}
		}
		void person_display(int n){
			for(int i=0;i<n;i++){
				cout<<"Person id : "<<id<<endl;
				cout<<"Person Name : "<<name<<endl;
			}
		}
};

class teaching : public person{
 string subject;
 string teacher_name;
 public:
 	void teaching_accept(int n){
 		for(int i=0;i<n;i++){
 			cout<<"Enter the subject name : ";
 			cin>>subject;
 			cout<<"Enter the teacher name : ";
 			cin>>teacher_name;
		 }
	 }
	 void teaching_display(int n){
	 	for(int i=0;i<n;i++){
	 		cout<<"Teaching subject : "<<subject<<endl;
	 		cout<<"Name of teacher : "<<teacher_name<<endl;
		 }
	 }
};

class instructor :public person{
	public:
			void instructor_accept(int n){
			for(int i=0;i<n;i++){
				cout<<"Enter the person id : ";
				cin>>id;
				cout<<"Enter the person name : ";
				cin>>name;
			}
		}
		void instructor_display(int n){
			for(int i=0;i<n;i++){
				cout<<"Person id : "<<id<<endl;
				cout<<"Person Name : "<<name<<endl;
			}
		}
};

class nonteaching: public person{
	string dept;
	public:
		void nonteaching_accept(int n){
			for(int i=0 ;i<n;i++){
			
			cout<<"Enter the department : ";
			cin>>dept;
		}
		}
		void nonteaching_display(int n){
		for(int i=0;i<n;i++){
			cout<<"Department name : "<<dept<<endl;
		}	
		}
};




int main() {
	int num;
	cout<<"Enter the number of instructor : ";
	cin>>num;
	teaching teach;
	teach.person_accept(num);
	teach.person_display(num);
	teach.teaching_accept(num);
	teach.teaching_display(num);
	instructor inst;
	inst.person_accept(num);
	inst.person_display(num);
	inst.instructor_accept(num);
	inst.instructor_display(num);
	nonteaching nonteach;
	nonteach.person_accept(num);
	nonteach.person_display(num);
	nonteach.nonteaching_accept(num);
	nonteach.nonteaching_display(num);
	
	
	
	
	return 0;
}
