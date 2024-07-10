#include<iostream>
#include<fstream>
using namespace std;


class sample{
	char name[25];
	int roll;
	float avg_marks;
	 
	 public:
	 	void getdata(){
	 		cout<<"Enter the name :";
	 		cin>>name;
	 		cout<<"Ente the roll :";
	 		cin>>roll;
	 		cout<<"Enter the average marks :";
	 		cin>>avg_marks;
		 }
		 
		 void display(){
		 	cout<<"Name :"<<name<<endl;
		 	cout<<"Roll :"<<roll<<endl;
		 	cout<<"Average marks :"<<avg_marks<<endl;
		 }
};
int main(){
	sample s1,s2;
	ofstream o_file("sample.txt");
	if(!o_file.is_open()){
		cout<<"file is not open !!!!"<<endl;
	}
	else{
		s1.getdata();
		o_file.write((char*) &s1 ,sizeof(s1));
		o_file.close();
	}
	
	ifstream i_file("sample.txt");

	i_file.read((char*) &s2 ,sizeof(s2));
	cout<<"Contnent of the file :"<<endl;
		s2.display();
		return 0;
	
	
}
