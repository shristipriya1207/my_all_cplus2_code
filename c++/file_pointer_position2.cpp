#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char s[]="ONE TWO THREE";
	char filename[]="test1.txt";
	char ch;
	int len,pos;
	int i=0;
	fstream file;
	file.open(filename , ios::out);
	while(s[i] !='\0'){
//		file<<s[i];
file.put(s[i]);
		i++;
	}
	len=file.tellp();
	cout<<"the length of file is :"<<len<<endl;
	file.close();
	file.open(filename,ios::in);
	file.seekg(0);
	while(1){
		pos=file.tellg();
		cout<<pos;
		ch =file.get();
		if(file.eof()){
			break;
		}
		cout<<"\t"<<ch<<"\n";
	}
	
	return 0;
}
