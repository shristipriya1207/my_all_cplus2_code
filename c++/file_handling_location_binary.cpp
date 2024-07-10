#include <iostream>
#include<fstream>
using namespace std;
class emp{
	int emp_id;
	int age;
	double salary;
	public:
		emp(){
		}
		emp(int a,int b,double c){
			emp_id=a;
			age=b;
			salary=c;
		}
		void show(){
			cout<<emp_id<<"\t"<<age<<"\t"<<salary;
		}
};




int main(){
	fstream file;
	file.open("emp1.txt",ios::out|ios::binary);
	emp p[]={{0,25,23000},{1,92,55000},{2,36,234500},{3,65,8767867}};
	file.write((char *)p ,sizeof(p));
	file.close();
	file.open("emp1.txt",ios::in | ios::binary);
	emp obj;
	cout<<"size of employee obj :"<<sizeof(obj);
	file.seekg(0,ios::end);
	int cur_location=file.tellg();
	cout<<" the current loctaion :"<<cur_location;
	int total_obj=cur_location/sizeof(obj);
	cout<<" total object :"<<total_obj;
	
	int emp_id;
	cout<<"enter the id :";
	cin>>emp_id;
	int location= emp_id *sizeof(obj);
	file.seekg(location);
	file.read((char*)&obj,sizeof(obj));
	file.close();
	obj.show();
	return 0;
	
	
}


