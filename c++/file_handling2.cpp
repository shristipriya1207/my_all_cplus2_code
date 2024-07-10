#include <iostream>
#include<fstream>
using namespace std;



int main() {
//	string st1="this is c++ file handling programming ";
string st2;
cout<<"enter string to copy in file";
cin>>st2;
	ofstream out("sample.txt");
	out<<st2;
	out.close();
	string st3;
	cout<<"this is my message 1 : ";
	ifstream in("sample.txt");
	in>>st3;
		cout<<"this is my message : "<<st3;
		in.close();
	
	
	return 0;
}
