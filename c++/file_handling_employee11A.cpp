#include <iostream>
#include<fstream>
using namespace std;

class employee{
	public:
		char name[20], dept[20], desg[20];
		int id,sal;
		float da, hra, gross, tax, net;
		
		employee(){
			id=sal=0;
		}
		
		 void getData(){
                        cout << "\nEnter name : ";
                        cin >> name;
                        cout << "Enter department : ";
                        cin >> dept;
                        cout << "Enter designation : ";
                        cin >> desg;
                        cout << "Enter salary : ";
                        cin >> sal;

                        da = sal * 0.12;
                        hra = sal * 0.14;
                        tax = sal * 0.3;
                        gross = sal + da + hra;
                        net = gross - tax;
                }
		
		
		void showData(){
                        cout << "\n\nID : " << id;
                        cout << "\nName : " << name;
                        cout << "\nDepartment : " << dept;
                        cout << "\nDesignation : " << desg;
                        cout << "\nSalary : " << sal;
                        cout << "\nDA : " << da;
                        cout << "\nHRA : " << hra;
                        cout << "\nGross sal : " << gross;
                        cout << "\nTax : " << tax;
                        cout << "\nNet sal : " << net;
                }
		
		
};
int getempid(){
	ifstream i_file;
	employee obj;
	
	
	i_file.open("emp_data.txt");
	i_file.read((char*) &obj, sizeof(obj));
	while(!i_file.eof()){
		i_file.read((char*) &obj, sizeof(obj));
	}
	if(obj.id>0){
		return obj.id +=1;
	}
	else
	 return 1;
}




int main(){
	employee obj;
	ofstream o_file;
//	ifstream i_file;
	int id, search_id,n;
	cout<<"size of employee :"<<sizeof(obj);
	o_file.open("emp_data.txt", ios::app);
	if(!o_file.is_open()){
		cout<<"error";
	}
	cout<<"enter the number of employee ";
	cin>>n;
	
	id=getempid();
	while(n!=0){
		obj.getData();
		obj.id=id;
		o_file.write((char*) &obj, sizeof(obj));
		id++;
		n--;
	}
	o_file.close();
	cout<<"enter the emplyee id to search :";
	cin>>search_id;
	ifstream file("emp_data.txt");
	file.read((char*) &obj, sizeof(obj));
	while(!file.eof()){
		if(search_id=obj.id){
		obj.showData();
		break;
	}
	file.read((char*) &obj, sizeof(obj));
}
cout<<endl;
return 0;



}
