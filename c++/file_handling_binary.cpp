#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
	char input[100];
	strcpy(input,"apple is my fav fruit");
	fstream file("fruits.bin",ios::binary | ios::in | ios::out | ios::trunc);
	if(!file.is_open()){
		cout<<"error";
	}
	else{
		int len=strlen(input);
		for(int i=0;i<=len;i++){
			file.put(input[i]);
		}
		file.seekg(5);
		char ch;
		while(file.good()){
			file.get(ch);
			cout<<ch;
		}
	}
	
	
	return 0;
}
