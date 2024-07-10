#include <iostream>
#include<fstream>
using namespace std;

 

int main() {
	ofstream out;
	out.open("sample.txt");
	out<<"this is apple";
	out<<"this is mango";
	out.close();
	
	ifstream in;
	string s1;
	in.open("sample2.txt");
//	in>>s1;
//	in.close();
//	cout<<s1;
while(in.eof()==0){
	getline(in,s1);
	cout<<s1;
}
in.close();
	return 0;
}
