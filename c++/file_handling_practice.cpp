#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string content;
	int count=1;
	ofstream o_file("word.txt");
	if(!o_file){
		cout<<"error";
	}
	cout<<"enter the string :";
	getline(cin,content,'#');
	o_file<<content;
	o_file.close();
	ifstream i_file("word.txt");
	char ch;
	while(1){
		i_file.get(ch);
		if(ch=='\n' || ch==' '){
			count++;
		}
		if(i_file.eof()){
			break;
		}
		
	}
	cout<<"number of total words :"<<count;
	return 0;
}
