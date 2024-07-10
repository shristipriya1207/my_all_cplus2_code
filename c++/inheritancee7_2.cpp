#include<iostream>
using namespace std;

class employee{
	int emp_code;
	char emp_name[25];
	public:
	void get_employee(){
		cout<<"Enter the employee code : ";
		cin>>emp_code;
		cout<<"Enter the employee name : ";
		cin>>emp_name;
	}
	void show_employee(){
		cout<<"Employee code : "<<emp_code<<endl;
		cout<<"Employee name : "<<emp_name<<endl;
	}
};
class faculty : public employee{
	 char qualification[25];
	 int exp;
	 public:
	 void get_faculty(){
	 	get_employee();
	 	cout<<"Enter the qualification : ";
	 	cin>>qualification;
	 	cout<<"Enter the year of experience :";
	 	cin>>exp;
	 }
	 void show_faculty(){
	 	show_employee();
	 	cout<<"qualification :"<<qualification<<endl;
	 	cout<<"year of experience :"<<exp<<endl;
	 }
	 
}; 
class permanent:public faculty{
	int pay;
	int allow;
	public:
	void get_permanent(){
		get_faculty();
		cout<<"Enter the basic pay :";
		cin>>pay;
		cout<<"Enter the academic allowance :";
		cin>>allow;
	}
	void show_permanent(){
		show_faculty();
		cout<<"basic pay :"<<pay<<endl;
		cout<<"Academic allowance :"<<allow<<endl;
	}
};
class contract :public faculty{
	int pro;
	public:
		void get_contract(){
			get_faculty();
			cout<<"Enter the probation years :";
			cin>>pro;
		}
		void show_contract(){
			show_faculty();
			cout<<"Probation years :"<<pro<<endl;
		}
};
class non_teaching :public employee{
	char grade[2];
	public:

		void get_non_teaching(){
				get_employee();
			cout<<"Enter the grade :";
			cin>>grade;
			
		}
		void show_non_teaching(){
			show_employee();
			cout<<"Grade :"<<grade<<endl;
		}
};
int main(){
	permanent p;
	contract c;
	non_teaching n;
	cout<<"\t\t\t\tPERMANENT FACULTY EMPLOYEE"<<endl;
	p.get_permanent();
	p.show_permanent();
	cout<<"\t\t\t\tCONTRACT FACULTY EMPLOYEE"<<endl;
	c.get_contract();
	c.show_contract();
	cout<<"\t\t\t\tNON TEACHING EMPLOYEE"<<endl;
	n.get_non_teaching();
	n.show_non_teaching();
	 return 0;
}



















