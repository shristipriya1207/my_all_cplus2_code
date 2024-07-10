#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
	char ch ='A';
	fstream file("test.txt" , ios::out );
	if(!file.is_open()){
		cout<<"file not open";
	}
	for(int i=0;i<10;i++){
		file<<ch;
		ch++;
	}
	cout<<file.tellp()<<endl;
	file.seekp(2);
	file<<"HELLO";
	file.close();
	file.open("test.txt", ios::in);
	cout<<file.tellg()<<endl;
	file.seekg(2);
	cout<<file.tellg()<<endl;
	while(1){
		file.get(ch);
		if(file.eof())
		{
			break;
		}
		cout<<ch;
	}
	return 0;
	
	
}
