#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string content;
	ofstream o_file("file1.txt");
	cout<<"Enterr the string :";
	getline(cin,content,'#');
	if(!o_file){
		cout<<"error";
		
	}
	o_file<<content;
	cout<<o_file.tellp()<<endl;
	o_file.close();
	
	ifstream i_file("file1.txt");
	char ch;
	while(1){
		i_file.get(ch);
		if(i_file.eof())
{
	break;
		}
		cout<<ch;			
	}
	i_file.seekg(0,ios::beg);


ofstream o_file2("file2.txt");
if(!o_file2){
		cout<<"error";
		
	}
	while(1){
		o_file2.put(ch);
		if(i_file.eof()){
			break;
		}
	}

o_file.close();
ifstream i_file2("file2.txt");
char chh;
while(1){
		i_file2.get(chh);
		if(i_file2.eof())
{
	break;
		}
		cout<<chh;			
	}
i_file2.close();
i_file.close();




	return 0;
}

